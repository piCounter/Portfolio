
/**
 * Michael Buckley
 * Feb 25, 2021
 * Zoom 5 part 3
 */

import java.util.Scanner;

public class Zoom5p3 {
    public static void main(String[] args) {
        // a year is a leap year if it is divisible by 4 but not by 100, or it is divisible by 100

        // scanner setup
        Scanner input = new Scanner(System.in);

        // input year
        System.out.print("Enter a year: ");
        int year = input.nextInt();

        // check if leap year
        boolean leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        // display
        System.out.println(year + " is a leap year? " + leap);

    }
}