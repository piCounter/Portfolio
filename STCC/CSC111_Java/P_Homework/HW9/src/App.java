/**
 * Michael Buckley
 * Apr 30, 2021
 * Homework 9
 */

import java.util.Scanner;

public class App {

    // call the function for each part of the assignment
    public static void main(String[] args) {

        // Homework 9 part 1
        part1();

        // Homework 9 part 2
        part2();

    }

    public static void part1() {

        // create scanner
        Scanner input = new Scanner(System.in);

        // main variables
        int count = 0;
        double width, height;

        // get number of rectangles from user as count
        while (count < 1) {
            System.out.print("How many rectangles will you be entering? ");
            count = input.nextInt();
            input.nextLine();
            if (count < 1) {
                System.out.println("Please enter a count greater than 0 to proceed");
            }
        }

        // create class object array
        Rectangle[] object = new Rectangle[count];
        
        // create rectangle objects from user input
        for (int i=0; i<count; i++) {
            System.out.printf("Enter width and height for object # %d (ex: 4 40.1): ", i+1);
            width = input.nextDouble();
            height = input.nextDouble();
            input.nextLine();
            object[i] = new Rectangle(width, height);
        }

        // display all rectangle objects information
        for (int i=0; i<count; i++) {
            System.out.printf("Rectangle %d - w = %.2f, h = %.2f, area = %.2f, perimeter = %.2f\n", i+1, object[i].width, object[i].height, object[i].getArea(), object[i].getPermeter());
        }
        System.out.println();

        // close scanner
        input.close();
    }

    public static void part2() {

        // create scanner
        Scanner input = new Scanner(System.in);

        // main variables
        int stocks = -1;
        String name, symbol;

        // get number of stocks from user
        while (stocks < 0) {
            System.out.print("How many different stocks do you have? ");
            stocks = input.nextInt();
            input.nextLine();
        }

        // create class object array
        Stock[] share = new Stock[stocks];

        // create each share from user input
        for (int i=0; i<stocks; i++) {
            System.out.printf("Stock %d\n", i+1);
            System.out.print("\tSymbol: ");
            symbol = input.nextLine();
            
            System.out.print("\tName: ");
            name = input.nextLine();

            share[i] = new Stock(symbol, name);

            System.out.print("\tPrevious Closing Price: $");
            share[i].previousClosingPrice = input.nextDouble();
            input.nextLine();
            
            System.out.print("\tCurrent Price: $");
            share[i].currentPrice = input.nextDouble();
            input.nextLine();
        }

        // output
        System.out.println("\n\nSymbol        Name          Percent Change");
        System.out.println("__________________________________________");
        for (int i=0; i<stocks; i++) {
            System.out.printf("%-9s     %-20s% 7.3f", share[i].symbol, share[i].name, share[i].getChangePercent());
            System.out.print("%\n");
        }

        // close scanner
        input.close();
        
    }

}
