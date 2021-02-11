
/**
 * Michael Buckley
 * Feb 11, 2021
 * Homework 2, part 1
 */

import java.util.Scanner;

public class Homework2p1 {
    public static void main(String[] args) {
        // create scanner
        Scanner input = new Scanner(System.in);

        // declare variables
        System.out.print("How many miles are you driving?: ");
        double distance = input.nextDouble();
        System.out.print("your average mpg: ");
        double mpg = input.nextDouble();
        System.out.print("Current price per gallon: ");
        double price = input.nextDouble();

        // close scanner
        input.close();

        // calculations
        double total = distance / mpg * price;
        total = (int)(total*100)/100.0; // converts answer to 2 decimals max

        // output
        System.out.print("The cost of this trip is: $" + total + "\n");
    }
}
