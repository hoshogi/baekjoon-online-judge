/*
Title   : 스위치 켜고 끄기
Author  : Hoseok Lee
Date    : 2024/01/30

https://www.acmicpc.net/problem/1244
https://github.com/hoshogi
*/

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws IOException, NumberFormatException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringBuilder sb = new StringBuilder();
		
		int switchNum = Integer.parseInt(br.readLine());	
		int[] switches = new int[switchNum + 1];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		for (int i = 1; i <= switchNum; i++)
			switches[i] = Integer.parseInt(st.nextToken());
		
		int studentNum = Integer.parseInt(br.readLine());
		for (int i = 0; i < studentNum; i++) {
			st = new StringTokenizer(br.readLine());
			int student = Integer.parseInt(st.nextToken());
			int num = Integer.parseInt(st.nextToken());
			
			if (student == 1) {
				for (int j = num; j <= switchNum; j += num)
					switches[j] = switches[j]^1;
			} else {
				switches[num] = switches[num]^1;
				for (int j = 1; j <= switchNum; j++) {
					if (num - j <= 0 || num + j > switchNum)
						break;
					if (switches[num - j] == switches[num + j]) {
						switches[num - j] = switches[num - j]^1;
						switches[num + j] = switches[num + j]^1;
					}
					else
						break;
				}
			}
		}
		
		for (int i = 1; i <= switchNum; i++) {
			sb.append(switches[i]).append(" ");
			if (i % 20 == 0)
				sb.append("\n");
		}
		
		bw.write(sb.toString());
		bw.flush();
		bw.close();
	}
}