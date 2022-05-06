/**
 * Michael Buckley
 * Apr 8, 2021
 * Void Methods
 */

import java.util.Scanner;

public class ComputeCommission {
    public static void main(String[] args) {
        
        char vType = 'L'; // 'S' or 'L'
        int value = 23000;

        // invoke the method
        computeCommission(value, vType);

    }
    public static void computeCommission(int price, char type) {

        // compute commission

        double commRateS = 0.08;
        double commRateL = 0.09;
        double commValue;


        if (type == 'S')
            commValue = price * commRateS;
        else
            commValue = price * commRateL;

        // display the commission
        System.out.printf("The commission for the sale of this car is $%3.2f\n", commValue);
    }

}
