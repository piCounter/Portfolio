
/**
 * Michael Buckley
 * Mar 3, 2021
 * Homework 4 - part 2
 */

import java.util.Scanner;

public class Hw4p2 {
    public static void main(String[] args) {

        // create scanner
        Scanner input = new Scanner(System.in);

        // variable declaration and input
        System.out.print("Enter a SSN: ");
        String ssn = input.nextLine();

        // validation - checks length and '-' are in the appropriate place
        if ((ssn.length() == 11) && (ssn.indexOf('-') == 3) && (ssn.lastIndexOf('-') == 6)) {
            int digits = 0;

            // iterate over each char in string ssn
            for (int index = 0; index < ssn.length(); index++) {
                Boolean isNum = Character.isDigit(ssn.charAt(index));

                // increment digit count if digit is true
                if (((isNum != false) && (index != 3)) || ((isNum != false) && (index != 6))) {
                    ++digits;
                }
            }

            // if 9 digits were present in ssn
            if (digits == 9)
                System.out.println(ssn + " is a valid social security number");

            else
                System.out.println(ssn + " is an INVALID social security number");

        }

        // if length or '-' not correct
        else
            System.out.println(ssn + " is an INVALID social security number");

        input.close(); // i know it does not need to be closed but my java flags it as a resource leak
    }
}
