/**
 * Michael Buckley
 * Apr 20, 2021
 * Homework 8 part 1
 */

import java.util.Scanner;
import java.util.Arrays;

public class Hw8p1 {
    public static void main(String[] args) {
        // import scanner
        Scanner input = new Scanner(System.in);

        // declare variables
        int employees = 8;
        int daysOfWeek = 7;
        double[][] employeeHours = new double[employees][daysOfWeek];
        double[] employeeTotalHours = new double[employees];
        double[] sortedEmployeeTotalHours = new double[employees];


        // nested for loop for taking hour input for all employees for each day of the week
        for (int i=0; i<employees; i++) {
            for (int j=0; j<daysOfWeek; j++) {
                // local variable
                String day = "";

                // get day of the week
                switch (j) {
                    case 0:
                        day = "Sunday";
                        break;
                    case 1:
                        day = "Monday";
                        break;
                    case 2:
                        day = "Tuesday";
                        break;
                    case 3:
                        day = "Wednesday";
                        break;
                    case 4:
                        day = "Thursday";
                        break;
                    case 5:
                        day = "Friday";
                        break;
                    case 6:
                        day = "Saturday";
                        break;
                }
                
                System.out.printf("Enter hours for Employee %d for %s: ", i, day);
                employeeHours[i][j] = input.nextDouble();
            }
        }

        // calculate total hours and store in new list. each location is a single employee
        for (int i=0; i<employees; i++) {
            for (int j=0; j<daysOfWeek; j++) {
                employeeTotalHours[i] += employeeHours[i][j];
                sortedEmployeeTotalHours[i] += employeeHours[i][j];
            }
        }

        // sort employees by total hours worked
        Arrays.sort(sortedEmployeeTotalHours);

        // print out in decreasing order
        for (int i=employees; i>0; i--) {
            for (int j=0; j<employees; j++) {
                if (sortedEmployeeTotalHours[i-1] == employeeTotalHours[j]) {
                    System.out.printf("Employee %d worked %.2f total hours.\n", j, sortedEmployeeTotalHours[i-1]);
                    employeeTotalHours[j] *= -1; //change employee total values to prevent duplication
                    break;
                }
            } 
        }

        // close scanner
        input.close();
    }    
}
