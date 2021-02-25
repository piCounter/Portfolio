
/**
 * Michael Buckley
 * Feb 25, 2021
 * Zoom 5 part 2
 */

import java.util.Scanner;

public class Zoom5p2 {
    public static void main(String[] args) {

        // scanner setup
        Scanner input = new Scanner(System.in);

        final double lbs_kg = 0.45359237;
        final double in_m = 0.0254;

        // input weight and height
        System.out.print("Enter weight in pounds: ");
        double weight = input.nextDouble();

        // input height in feet and inches
        System.out.print("Enter your height in feet and inches: ");
        double heightFeet = input.nextDouble();
        double heightInch = input.nextDouble();
        double height = heightFeet * 12 + heightInch;

        // computer bmi
        double massKg = weight * lbs_kg;
        double heightMeter = height * in_m;
        double bmi = massKg / Math.pow(heightMeter, 2.0);

        // print result
        System.out.println("BMI is " + bmi);
        if (bmi < 18.5)
            System.out.println("Underweight");
        else if (bmi < 25)
            System.out.println("Average");
        else if (bmi < 30)
            System.out.println("Overweight");
        else
            System.out.println("Obese");

        System.out.println("Thank you for verifying your BMI");

    }
}
