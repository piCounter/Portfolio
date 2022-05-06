/**
 * Michael Buckley
 * Apr 1, 2021
 * Homework 6 part 1
 */

import java.util.Scanner;

public class Hw6p1 {
    public static void main(String[] args) {

        // variable decliration
        Scanner input = new Scanner(System.in);
        int n;
        double side;

        // user input
        System.out.print("Enter the number of sides: ");
        n = input.nextInt();
        System.out.print("Enter the length of a side: ");
        side = input.nextDouble();

        // output
        System.out.printf("The area of the polygon is %.2f\n", area(n, side));

        // close scanner
        input.close();
    }

    public static double area(int n, double side) {

        // calculate the area of a "n" sided polygon with length "side"

        double area = (n * Math.pow(side, 2) / (4.0 * Math.tan(Math.PI /n)));
        return area;
    }
}
