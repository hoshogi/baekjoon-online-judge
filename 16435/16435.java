/*
Title   : BOJ_16435 [스네이크버드]
Author  : Hoseok Lee
Date    : 2024/02/13

https://www.acmicpc.net/problem/16435
https://github.com/hoshogi
*/

import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int fruitNum = Integer.parseInt(st.nextToken());
        int snakeLen = Integer.parseInt(st.nextToken());
        int[] heights = new int[fruitNum];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < fruitNum; i++) {
            heights[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(heights);
        for (int height : heights) {
            if (snakeLen < height)
                break;
            snakeLen++;
        }
        bw.write(Integer.toString(snakeLen));
        bw.flush();
        bw.close();
    }
}
