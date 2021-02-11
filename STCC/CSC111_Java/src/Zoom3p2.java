/**
 * Michael Buckley
 * Feb 11, 2021
 * loan payment
 */

import java.util.Scanner;

 public class Zoom3p2 {
    public static void main(String[] args) {
        // create a scanner
        Scanner input = new Scanner(System.in);

        // Enter annual interest rate
        System.out.print("Enter annual interest rate: ");
        double annualRate = input.nextDouble();
        
        // Enter number of years
        System.out.print("Enter the number of years: ");
        int years = input.nextInt();
        
        // Enter the load amount
        System.out.print("Enter the loan amount: ");
        double loan = input.nextDouble();
        
        // Enter the credit score
        System.out.print("Enter the credit score: ");
        int creditScore = input.nextInt();

        input.close();
        
        double monthlyRate = annualRate / 1200; // 1200 = 12 months * 100 to make a percentage
        
        if (creditScore < 750)
            annualRate =+ 0.5;
        
        // Calc monthly payment
        double temp1, temp2, temp3;
        temp1 = loan * monthlyRate;
        temp2 = Math.pow(1 + monthlyRate, years * 12);
        temp3 = 1 - (1 / temp2);
        double payment = temp1 / temp3;

        double total = payment * years * 12;
        total = (int)(total*100)/100.0; // converts answer to 2 decimals max
        System.out.println("The total payment is $" + total);


        
    }
}
