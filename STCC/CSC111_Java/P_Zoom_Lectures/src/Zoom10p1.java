/**
 * Michael Buckley
 * Apr 15, 2021
 * Two dimentional arrays
 */

import javax.swing.JOptionPane;

public class Zoom10p1 {
    public static void main(String[] args) {
        // define the 2d array
        int[][] rents = {{1400, 1450, 1510},
                         {1500, 1560, 1630},
                         {1625, 1675, 1740},
                         {2000, 2250, 2600}};
        String entry;
        int floor, bedrooms;

        // ask for the floor and number of bedrooms
        entry = JOptionPane.showInputDialog(null, "Enter a floor number: ");
        floor = Integer.parseInt(entry);
        entry = JOptionPane.showInputDialog(null, "Enter number of bedrooms: ");
        bedrooms = Integer.parseInt(entry);

        // display rent
        String mess = "The rent for a " + bedrooms + " bedroom apartment on floor " + floor + " is $" + rents[floor][bedrooms];
        JOptionPane.showMessageDialog(null, mess);
    }
}
