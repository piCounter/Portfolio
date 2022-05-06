/**
 * Michael Buckley
 * Mar 4, 2021
 * Zoom 6 - Loops
 */

import java.util.Scanner;

public class Zoom6p1 {
    public static void main (String[] args) {

        /**
        // while loop - check first before do
        // while (num <= 1 || num >= 10) {
        //     System.out.println("You have entered a value between 1 and 10");
        // }

        // do while - do first then check
        // do {
        //     statement;
        //     statement;
        // } while (loop-condition)

        // for loop
        // for (initial-action; loop-condition; after action) {
        //     statement;
        //     statement;
        // }

        // for loop - print odd numbers
        // for (int count = 1; count < 10; count += 2) {
        //     System.out.println(count);
        // }
        */






        // addition quiz
            // create scanner
        Scanner input = new Scanner(System.in);

            // define variables
        int number1, number2, answer, count, correct=1, quizLength = 2, maxInt = 7564;

            // get 10 questions correct
        while (correct <= quizLength) {

            System.out.println("Example " + correct + ":");

                // get 2 random integers <= 50
            number1 = (int)(Math.random()*maxInt); // (int) converts the following to an interger
            number2 = (int)(Math.random()*maxInt);

                // write the question
            System.out.print("What is " + number1 + " + " + number2 + " ? ");

                // enter your answer
            answer = input.nextInt();

                // check to see if the anser is correct. If not, repeat the question
            count = 1;
            while (number1 + number2 != answer) {
                System.out.print("Oops, try again. What is " + number1 + " + " + number2 + " ? ");
                answer = input.nextInt();
                count++;
            }

                // correct answer response
            if (count == 1)
                System.out.println("Correct, on your first try too!");
            else
                System.out.println("Correct. It took you " +  count + " attempt(s)");
                

                // check if quiz is complete
            if (correct == quizLength) {
                System.out.println("\n\t~~ Quiz complete - awesome job! ~~\n");
                break;
            }
            else
                correct++; // increment correct questions

            input.close();
        }
    }
}
