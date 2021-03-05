/**
 * Michael Buckley
 * Feb 24, 2021
 * Homework 3 - part 1
 */

import java.text.DecimalFormat;
import java.util.Scanner;

public class Hw3p1 {
    public static void main(String[] args) {

        // create scanner
        Scanner input = new Scanner(System.in);

        // set decimal format
        DecimalFormat df = new DecimalFormat("#.00");

        // variable declaration / input
        int quantity = 0;
        double price = 99;

        // input
        System.out.print("Enter the quantity for purchase: ");
        while (quantity <=0) {
            quantity = input.nextInt();
            if (quantity <= 0)
                System.out.print("Enter a quantity above 0: ");
            }

        // computations
        if (quantity >= 100) 
            price = price * .5 * quantity;
        else if (quantity  >= 50) 
            price = price * .6 * quantity;
        else if (quantity >= 20)
            price = price * .7 * quantity;
        else if (quantity >= 10)
            price = price * .8 * quantity;

        // output
        System.out.println();
        System.out.println("____________");
        System.out.println("Total: $" + df.format(price) + " for " + quantity + " licenses.");
        System.out.println();

        input.close();
        }
    }
