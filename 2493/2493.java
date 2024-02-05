/*
Title   : BOJ_2493 [탑]
Author  : Hoseok Lee
Date    : 2024/02/05

https://www.acmicpc.net/problem/2493
https://github.com/hoshogi
*/

import java.io.*;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {

    private static Deque<Integer> heights;
    private static Deque<Integer> indexes;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder result = new StringBuilder();

        heights = new ArrayDeque<>();
        indexes = new ArrayDeque<>();

        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= n; i++) {
            int height = Integer.parseInt(st.nextToken());

            if (heights.isEmpty()) {
                result.append(0).append(" ");
                push(height, i);
                continue;
            }

            if (height <= heights.peekLast()) {
                result.append(indexes.peekLast()).append(" ");
                push(height, i);
                continue;
            }

            if (height > heights.peekLast()) {
                while (true) {
                    if (!heights.isEmpty() && height > heights.peekLast()) {
                        heights.pollLast();
                        indexes.pollLast();
                    }
                    else
                        break;
                }

                if (heights.isEmpty()) {
                    result.append(0).append(" ");
                    push(height, i);
                    continue;
                }

                result.append(indexes.peekLast()).append(" ");
                push(height, i);
            }
        }

        bw.write(result.toString());
        bw.flush();
        bw.close();
    }

    private static void push(int height, int index) {
        heights.addLast(height);
        indexes.addLast(index);
    }
}