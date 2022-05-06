/**
 * Michael Buckley
 * Mar 25, 2021
 * Zoom 8 - functions and methods
 */

public class Zoom8 {
    
    public static void main(String[] args) {  // this is the main method that runs the rest
        int i = 5, j = 2;
        int k = Max(i, j);
        System.out.println("The maximum of " + i + " and " + j + " is " + k);
    }

    // function to display Introduction to methods
    public static void Display() {
        System.out.println("\n\n\tIntroduction to Methods\n\n");
    }

    // Method to return the maximum number
    public static int Max(int a, int b) {
        int result;
        if (a > b) 
            result = a;
        else
            result = b;
        return result;
    }
}
