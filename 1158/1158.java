/*
Title   : BOJ_1158 [요세푸스 문제]
Author  : Hoseok Lee
Date    : 2024/02/05

https://www.acmicpc.net/problem/1158
https://github.com/hoshogi
*/

import java.io.*;
import java.util.LinkedList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder result = new StringBuilder("<");

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int index = 0;

        List<Integer> nums = new LinkedList<>();
        for (int i = 1; i <= n; i++) {
            nums.add(i);
        }

        while (!nums.isEmpty()) {
            index = (index + k - 1) % nums.size();
            result.append(nums.get(index)).append(", ");
            nums.remove(index);
        }

        result.replace(result.lastIndexOf(", "), result.lastIndexOf(", ") + 2, ">");
        bw.write(result.toString());
        bw.flush();
        bw.close();
    }
}