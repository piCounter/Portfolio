/**
 * Michael Buckley
 * Mar 3, 2021
 * Homework 4 - part 1
 */

import java.util.Scanner;

public class Hw4p1 {
    public static void main(String[] args) {

        // setup scanner
        Scanner input = new Scanner(System.in);
        
        // variable declaration and input
        System.out.print("Enter the length from the center to the vertex: ");
        double r = input.nextDouble();

        // computations
        double s = 2 * r * (Math.sin(Math.PI/5));
        double area = (5 * Math.pow(s, 2)) / (4 * Math.tan(Math.PI/5));

        //output
        System.out.println("The area of the pentagon is " + (Math.round(area * 100) / 100.0));
        
        input.close();
    }
}
