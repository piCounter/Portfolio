/**
 * Michael Buckley
 * Feb 24, 2021
 * Homework 3 part 2
 */

import javax.swing.JOptionPane;
import java.text.DecimalFormat;


public class Homework3p2 {
    public static void main(String[] args) {

        // variable declaration
        double air = 1100.0, water = 4900.0, steel = 16400.0, distance = -1, time;
        int index = -1;
        
        // UI option button popup
        Object[] options = {"Air", "Water", "Steel"};
        while (index < 0) {
            index = JOptionPane.showOptionDialog(null, "Select the medium measured: ", "Sound mediums",JOptionPane.DEFAULT_OPTION, JOptionPane.ERROR_MESSAGE, null, options, options[0]);
        }

        // UI input
        while (distance < 0) {
            String distanceString = JOptionPane.showInputDialog(null, "Enter the distance measured: ");
            distance = Double.parseDouble(distanceString);
        }

        // computations and output
        switch (index) {
            case 0:
                JOptionPane.showMessageDialog(null, "Time: " + distance / air);
            case 1:
                JOptionPane.showMessageDialog(null, "Time: " + distance / water);
            case 2:
                JOptionPane.showMessageDialog(null, "Time: " + distance / steel);
        }
        
    }
    
}
