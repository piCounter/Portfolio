/**
 * Michael Buckley
 * Feb 11, 2021
 * overtime pay
 */

import java.util.Scanner;

public class Zoom3p1 {
    public static void main(String[] args) {
        
        Scanner bob = new Scanner(System.in);
        System.out.print("Enter the hours: ");
        double hours = bob.nextDouble();
        System.out.print("Enter the rate: ");
        double rate = bob.nextDouble();
        double gross = 0;

        if (hours <= 40)
            gross = hours * rate;
        
        else
            gross = (40 * rate) + (1.5 * rate * (hours-40));
        
        bob.close();
        
        System.out.println("Your worked " + hours + " at $" + rate + " per hour and made $" + gross);
    }
}