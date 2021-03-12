
/**
 * Michael Buckley
 * Mar 12, 2021
 * Homework 5 part 1
 */

import java.util.Scanner;

public class Hw5p1 {
    public static void main(String[] args) {

        // create scanner
        Scanner input = new Scanner(System.in);

        // variable decliration
        double mean, deviation;
        int n = 10;
        double sumX = 0, sumXsq = 0;

        // user input
        System.out.print("Enter ten number: ");
        for (int i = 0; i < n; i++) {
            double temp = input.nextDouble();
            sumX += temp; // sum of all values
            sumXsq += Math.pow(temp, 2); // sum of the square of each value
        }

        // calculate mean
        mean = sumX / n;

        // calculate deviation
        deviation = Math.sqrt(
            (n * Math.pow(sumXsq, 2) - Math.pow(sumX, 2))
             / 
             n * (n-1)
            );

        // output
        System.out.println(mean);
        System.out.println(deviation);
    }
}
