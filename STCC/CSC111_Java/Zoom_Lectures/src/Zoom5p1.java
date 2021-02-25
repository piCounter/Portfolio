/**
 * Michael Buckley
 * Feb 25, 2021
 * Zoom 5 part 1
 */

import java.util.Scanner;

public class Zoom5p1 {
   public static void main(String[] args) {

    // define scanner
    Scanner input = new Scanner(System.in);
       
    // Subtract 2 numbers and check your answer
    int Num1 = (int)(Math.random() * 100);
    int Num2 = (int)(Math.random() * 100);

    // Large - Small
    System.out.println(Num1 + "\t" + Num2);

    // make sure larger number is first
    if (Num1 < Num2) {
        int Temp = Num1;
        Num1 = Num2;
        Num2 = Temp;
    }

    // prompt user for answer
    System.out.print("What is " + Num1 + " - " + Num2 + "? ");
    int Answer = input.nextInt();

    // grade answer and display
    if (Num1 - Num2 == Answer)
        System.out.println("Correct");
    else
        System.out.println("wrong");

   }
}