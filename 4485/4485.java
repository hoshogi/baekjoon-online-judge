/*
Title   : BOJ_4485 [녹색 옷 입은 애가 젤다지?]
Author  : Hoseok Lee
Date    : 2024/03/27

https://www.acmicpc.net/problem/4485
https://github.com/hoshogi
*/

import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    private static int len, result;
    private static int[][] graph, costs;
    private static int[] dr = {-1, 0, 1, 0};
    private static int[] dc = {0, 1, 0, -1};
    private static final int MAX = 1_000_000_000;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder answer = new StringBuilder();

        int count = 0;

        while (true) {
            count++;
            len = Integer.parseInt(br.readLine());
            if (len == 0) {
              break;
            }

            graph = new int[len][len];
            for (int i = 0; i < len; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                for (int j = 0; j < len; j++) {
                    graph[i][j] = Integer.parseInt(st.nextToken());
                }
            }

            costs = new int[len][len];
            for (int i = 0; i < len; i++) {
                Arrays.fill(costs[i], 0, len, MAX);
            }
            costs[0][0] = graph[0][0];
            result = MAX;
            dfs(0, 0, costs[0][0]);
            answer.append("Problem ").append(count).append(": ").append(result).append("\n");
        }
        bw.write(answer.toString());
        bw.flush();
        bw.close();
    }

    private static void dfs(int r, int c, int cost) {
        if (r == len - 1 && c == len - 1) {
            result = Math.min(result, cost);
            return;
        }

        for (int i = 0; i < 4; i++) {
            int tempR = r + dr[i];
            int tempC = c + dc[i];

            if (tempR < 0 || tempR >= len || tempC < 0 || tempC >= len)
                continue;
            if (costs[tempR][tempC] > cost + graph[tempR][tempC]) {
                costs[tempR][tempC] = cost + graph[tempR][tempC];
                if (costs[tempR][tempC] <= result)
                    dfs(tempR, tempC, costs[tempR][tempC]);
            }
        }
    }
}
