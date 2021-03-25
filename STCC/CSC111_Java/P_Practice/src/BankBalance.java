/***
 * Michael Buckley
 * Mar 25, 2021
 * Calculate the balance for any number of years
 */

 import java.util.Scanner;
 

public class BankBalance {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        double balance;
        final double rate = 0.02; // 3.5% apr
        int years = 0;

        // read and validate balance
        do {
            System.out.print("Please enter the initial balance greater than 0: $");
            balance = keyboard.nextDouble();

        } while(balance <= 0);

        // read and validate years
        while (years <= 0 || years > 999) {
            System.out.print("Please enter the number of years less than 100: ");
            years = keyboard.nextInt();
        }

        // calculate the balance
        for (int y = 1; y <= years; y++) {
            balance = balance + balance * rate;
            System.out.printf("End of year %2d your balance is $%5.2f\n", y, balance);
        }
    }
}
