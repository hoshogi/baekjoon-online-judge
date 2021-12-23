/*
Title   : BOJ_4999 [아!]
Author  : Hoseok Lee
Date    : 2021/12/23
https://github.com/hoshogi
https://www.acmicpc.net/problem/4999
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String a = scanner.nextLine();
        String b = scanner.nextLine();

        if (a.length() < b.length())
            System.out.println("no");
        else
            System.out.println("go");
    }
}
