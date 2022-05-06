/**
 * Michael Buckley
 * Feb 11, 2021
 * Homework 2, part 2
 */

 import java.util.Scanner;

 public class Hw2p2 {
     public static void main(String[] args) {
        // open scanner
        Scanner input = new Scanner(System.in);

        // declare variables
        System.out.print("\nWhat is the initial investment amount: $");
        double initialInvestment = input.nextDouble();
        System.out.print("What is the annual interest rate (e.g. 100 for 100%): ");
        double annualInterest = input.nextDouble();
        System.out.print("How many years will you hold this investment: ");
        int years = input.nextInt();

        // calculations
        double monthlyInterest = annualInterest / 1200.0;
        double pow = years * 12.0;
        double futureValue = Math.pow(1+monthlyInterest, pow) * initialInvestment;
        futureValue = (int)(futureValue*100)/100.0; // converts answer to 2 decimals max


        // output
        System.out.println("________________");
        System.out.println("Future value is $" + futureValue + "\n");

        // close scanner
        input.close();
     }
 }