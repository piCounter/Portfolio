/*
    Michael Buckley
    Feb 4, 2021
    Pop-up collection method using JOptionPane
*/
import javax.swing.JOptionPane;

public class Zoom2p2
{
    /*
        class takes input from the user in a dedicated pop-up window
    */

    public static void main(String[] args)
    {
        // variable declaration
        String result;
        String hoursString;
        String rateString;
        float hours;
        float rate;
        float salary;
        double stateTax = 0.0635;

        // user input
        result = JOptionPane.showInputDialog(null,"What is your name?");
        hoursString = JOptionPane.showInputDialog(null,"How many hours did you work this week?");
        rateString = JOptionPane.showInputDialog(null,"What is your pay rate?");

        // change type
        hours = Float.parseFloat(hoursString);
        rate = Float.parseFloat(rateString);

        // computations
        salary = hours * rate;
        stateTax *= salary;

        // output
        System.out.println(" your taxes $" + stateTax);
        JOptionPane.showMessageDialog(null, "Hello, " + result + "!\nWelcome to STCC\nYour income is $" + salary + "\n your taxes $" + stateTax);
    }
}
