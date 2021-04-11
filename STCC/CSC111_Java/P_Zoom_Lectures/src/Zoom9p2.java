/**
 * Michael Buckley
 * Apr 8, 2021
 * Intro to arrays and using methods
 */

import java.nio.file.CopyOption;
import java.util.Scanner;

public class Zoom9p2 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 5, 9, 15, 22, 44}; // create an array called arr and store int 1 and 2 in locations 0 and 1 respectfully
        int[] copy = new int [arr.length];
        int [] Adjusted = new int[arr.length];

        for (int n=0; n < copy.length; n++) { // when you copy an array using "newCopy = original" the location in memory is the same but is usable with both names. in order to create a brand new array with the same inforamtion as the orginal you need to use a loop to initalize the new one
            copy[n] = arr[n];
        }


        // write a method that will square each number and print it
        Square(arr);

        int sum = Sum(copy);
        System.out.println("The sum of all the digits is " + sum);

        Adjusted = Adjust(copy);
        for (int c=0; c < Adjusted.length; c++)
            System.out.println(Adjusted[c]);

        
    }

    private static int[] Adjust(int [] list) {
        for (int c=0; c < list.length; c++)
            list[c] += 5;
    }

    private static int Sum(int[] r) {
        int t = 0;
        for (int i=0; i < r.length; i++) 
            t += r[i];
        return t;
    }

    private static void Square(int[] x) {
        // method square
        for (int i=0; i < x.length; i++) {
            x[i] = x[i] * x[i];
            System.out.println(x[i]);
        }
    }
}
