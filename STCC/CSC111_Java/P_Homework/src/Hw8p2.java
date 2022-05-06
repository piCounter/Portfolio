/**
 * Michael Buckley
 * Apr 20, 2021
 * Homework 8 part 2
 */

import java.util.Scanner;

public class Hw8p2 {

    public static double[][] addMatrix(double[][] a, double[][] b) {
        // declare method variable
        double[][] sum = new double[a.length][b.length];

        // iterate over arrays to get sums
        for (int i=0; i<a.length; i++) {
            for (int j=0; j<b.length; j++) {
                sum[i][j] += a[i][j] + b[i][j];
            }
        }

        return sum;
    }

    public static void main(String[] args) {
        // variable decliration
        Scanner input = new Scanner(System.in);
        int size = 3;
        double[][] matrix1 = new double[size][size];
        double[][] matrix2 = new double[size][size];
        double[][] sum = new double[size][size];

        // user input values into matrix 1
        System.out.print("Enter matrix1: ");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                matrix1[i][j] = input.nextDouble();
            }
        }
        // user input values into matrix 2
        System.out.print("Enter matrix2: ");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                matrix2[i][j] = input.nextDouble();
            }
        }

        // call function to add the two matrices together
        sum = addMatrix(matrix1, matrix2);

        // output of matrices and sum of matrices
        System.out.println("\n\t\t_________Sum of Matrices_________");
        for (int i=0; i<sum.length; i++) {
            for (int j=0; j<sum.length; j++) {
                System.out.printf("% 6.1f", matrix1[i][j]);
            }
            if (i == 0 || i == 2) {
                System.out.print("    ");
            }
            else {
                System.out.print("   +");
            }
            for (int j=0; j<sum.length; j++) {
                System.out.printf("% 6.1f", matrix2[i][j]);
            }
            if (i == 0 || i == 2) {
                System.out.print("    ");
            }
            else {
                System.out.print("   =");
            }
            for (int j=0; j<sum.length; j++) {
                System.out.printf("% 6.1f", sum[i][j]);
            }
            System.out.println();
        }
        System.out.println("\n");

        // close scanner
        input.close();
    }
}
