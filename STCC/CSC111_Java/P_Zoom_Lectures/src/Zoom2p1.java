// Michael Buckley
// Feb 4, 2021
// Name and Age

import java.util.Scanner;

public class Zoom2p1
{

    public static void main(String[] args)
    {
        String name;
        int age;
        double income;
        // Define Scanner
        Scanner mom = new Scanner(System.in);

        // Read name and age
        System.out.print("Pleae enter your name: -> ");
        name = mom.nextLine();
        System.out.print("Enter your age: -> ");
        age = mom.nextInt();
        System.out.print("Enter your income: -> ");
        income = mom.nextDouble();
        double stateTax = 0.065 * income;

        // show Name and Age
        System.out.println();  // blank line
        System.out.println("Your name is " + name);
        System.out.println("You are " + age + " years old.");
        System.out.println("Your income is $" + income);
        System.out.println(" your taxes $" + stateTax);

        mom.close();
    }
}
