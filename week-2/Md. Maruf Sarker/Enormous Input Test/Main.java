import java.util.Scanner;

// Written by: Md. Maruf Sarker
// Platform: codechef
// Problem: https://www.codechef.com/LP0TO101/problems/INTEST
// Language: java
// Date: 2023-01-31
// Difficulty Rating: 

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int count = 0;

        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();

            if (num % k == 0) {
                count++;
            }
        }

        System.out.println(count);
    }
}