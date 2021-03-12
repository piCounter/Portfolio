/**
 * Michael Buckley Mar 11, 2021 Formatting
 */

import java.util.Scanner;

public class Review4_formatting {
    public static void main(String[] args) {

        // create scanner
        Scanner input = new Scanner(System.in);

        // variable declaration
        double loanAmount, monthlyPayment, totalPayment, minRate = 5.0, maxRate = 8.0, interestIncrement = 1/8.0;
        int years;

        // input user variables
        System.out.println("Enter the loan amount: ");
        loanAmount = input.nextDouble();
        System.out.println("Enter the loan period in years: ");
        years = input.nextInt();
        System.out.println();

        // header
        System.out.printf("%-18s", "Interest Rate");
        System.out.printf("%-18s", "Monthly Payment");
        System.out.printf("%-18s\n", "Total Payment");

        for (double interestRate = minRate; interestRate <= maxRate; interestRate += interestIncrement) {
            // declare monthly interest rate
            double monthlyInterest = interestRate / 1200.0;

            // display interest rate
            System.out.printf("%-5.3f%%", interestRate);
            System.out.printf("%12s", "");

            // monthly payment
            monthlyPayment = (loanAmount * monthlyInterest / (1 - (1 / Math.pow((1 + monthlyInterest), (years * 12)))));
            System.out.printf("$%-,17.2f", monthlyPayment);

            // total payment
            totalPayment = monthlyPayment * years * 12;
            System.out.printf("$%-,18.2f", totalPayment);

            // create a new line
            System.out.println();
        }

        input.close();
    }
}
