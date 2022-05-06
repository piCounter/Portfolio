/**
 * Michael Buckley
 * Apr 15, 2021
 * Two dimentional arrays
 */

import javax.swing.JOptionPane;
import java.util.Scanner;

public class Zoom10p2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int students, assignments;
        String entry;
        entry = JOptionPane.showInputDialog(null, "Enter number of students in the class: ");
        students = Integer.parseInt(entry);
        entry = JOptionPane.showInputDialog(null, "Enter number of assignments for each student: ");
        assignments = Integer.parseInt(entry);
        double[][] grades = new double[students+1][assignments+1];

        // load the scores
        for (int s=0; s < students; s++) {
            for (int a=0; a < assignments; a++) {
                System.out.print("Student # " + (s+1) + " Assignment # " + (a+1) + " score: ");
                grades[s][a] = input.nextDouble();
            }
        }

        studentAverage(grades, students, assignments);

        // print the student average
        for (int i = 0; i < students; i++) 
            System.out.println("Student # " + (i+1) + " Average is " + grades[i][assignments]);

        input.close();        
    }

    private static void studentAverage(double[][] grades, int ST, int AS) {
        // find the average for each student
        int s, a;
        for (s=0; s < ST; s++) {
            double sum = 0;
            for (a=0; a < AS; a++) 
                sum += grades[s][a];
            grades[s][a] = sum / AS;
        }

    }
}
