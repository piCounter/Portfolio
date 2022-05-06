/**
 * Michael Buckley
 * Apr 8, 2021
 * Intro to arrays and using methods
 */

import java.util.Scanner;

public class Zoom9p1 {
    
    public static void main(String[] args) {

        // create scanner
        Scanner keyboard = new Scanner(System.in);


        int size;
        do {
            System.out.print("Enter the class size --> \n");
            size = keyboard.nextInt();
        } while (size <= 0);
        double [] Tests = new double[size]; // create an array with "size" number of locations
        double [] New = new double[size]; // create an array with "size" number of locations
        double sum = 0;

        // read the data
        System.out.println(" __Enter the scores__ ");
        for (int i=0; i < size; i++) {
            System.out.printf("Enter the score for student %3d: ", (i+1));
            Tests[i] = keyboard.nextDouble();
            sum += Tests[i];
        }

        // get the average
        double average = sum / size;
        System.out.printf("The class average is %5.2f \n" , average);

        // count how many students are above average and how many below average
        int count = 0; // number of students above average
        for (int i=0; i < size; i++) 
            if (Tests[i] > average)
                count++;
        
        System.out.println("Number of students above the average is: " + count);
        System.out.println("Number of students below the average is: " + (size-count));

        // copy the Tests array to new array
        // New = Tests or use the following code
        for (int i=0; i < size; i++)
            New = Tests;

        // print New
        for (int i=0; i < size; i++)
            System.out.println(New[i]);
        


    }
}
