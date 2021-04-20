/**
 * PRACTICE
*/

import java.util.Scanner;

public class PRACTICE {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int size = 3;
        int[][] arr = new int[size][size];

        System.out.print("Enter matrix1: ");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                arr[i][j] = input.nextInt();
                System.out.print(arr[i][j]);
            }
        }

        for (int i=0; i<size; i++) {
            for (int j=0; i<size; j++) {
            System.out.printf("%4d", arr[i][j]);
            }
        }
    }
}