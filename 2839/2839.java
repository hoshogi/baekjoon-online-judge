/*
Title   : BOJ_2839 [설탕배달]
Author  : Hoseok Lee
Date    : 2024/02/13

https://www.acmicpc.net/problem/2839
https://github.com/hoshogi
*/

import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int sugarWeight = Integer.parseInt(br.readLine());
        int sugarBag = sugarWeight / 5;
        int leftSugar = sugarWeight % 5;

        while (leftSugar != 0) {
            if (leftSugar % 3 == 0) {
                sugarBag += leftSugar / 3;
                break;
            }

            sugarBag--;
            leftSugar += 5;

            if (leftSugar > sugarWeight) {
                sugarBag = -1;
                break;
            }
        }

        bw.write(Integer.toString(sugarBag));
        bw.flush();
        bw.close();
    }
}