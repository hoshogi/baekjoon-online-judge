/*
Title   : BOJ_15649 [N과 M (1)]
Author  : Hoseok Lee
Date    : 2024/01/30

https://www.acmicpc.net/problem/15649
https://github.com/hoshogi
*/

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	
	private static int n, m;
	private static boolean[] isSelected;
	private static int[] nums;
	private static StringBuilder sb = new StringBuilder("");
	
	private static void permutation(int count) {
		if (count == m) {
			for (int num : nums)
				sb.append(num).append(" ");
			sb.append("\n");
			return;
		}
		
		for (int i = 1; i <= n; i++) {
			if (isSelected[i])
				continue;
			isSelected[i] = true;
			nums[count] = i;
			permutation(count + 1);
			isSelected[i] = false;
		}
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		n = Integer.parseInt(st.nextToken());
		m = Integer.parseInt(st.nextToken());
		
		isSelected = new boolean[n + 1];
		nums = new int[m];
		
		permutation(0);
		
		bw.write(sb.toString());
		bw.flush();
		bw.close();
	}
}