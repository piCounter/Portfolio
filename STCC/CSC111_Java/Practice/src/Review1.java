/*
    Michael Buckley
    Feb 4, 2021

*/

import java.util.Scanner;

public class Review1 {
    public static void main(String[] args) {

            Scanner input = new Scanner(System.in);

            double radius, area;
            
            System.out.println("Enter the radius of the circle: ");
            radius = input.nextDouble();

            area = Math.PI * Math.pow(radius, 2);

            System.out.println("The area of the circle is: " + area);
            input.close();
            

    }
}