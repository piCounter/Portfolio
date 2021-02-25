/**
 * Michael Buckley
 * Feb 24, 2021
 * Homework 3 part 2
 */

import javax.swing.JOptionPane;


public class Homework3p2 {
    public static void main(String[] args) {

        // variable declaration
        Object[] options = {"Air", "Water", "Steel"};
        int air = 1100.0, water = 4900.0, steel = 16400.0
        String distanceString;
        double distance == -1, time;

        // UI input
        while (distance < 0) {
            int x = JOptionPane.showOptionDialog(null, "Select the medium measured: ", "Sound mediums",JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE, null, options, options[0]);
            System.out.println("Your choice was " + options[x]);
            distanceString = JOptionPane.showInputDialog(null, "Enter the distance measured: ");
        }

        // chance type
        distance = Double.parseFloat(distanceString);

        // computations
        if (x == options[0]) {
            time = distance / air;
        else if (x == options[1])
            time = distance / water;
        else if (x == options[2])
            time = distance / steel;
        
        // output
        

    }
    
}
