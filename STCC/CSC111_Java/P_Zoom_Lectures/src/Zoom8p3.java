/**
 * Michael Buckley
 * Mar 25, 2021
 * Overloading
 */

public class Zoom8p3 {
    public static void main(String[] args) {
        System.out.println("The maximum of 5 and 20 is: " + Zoom8.Max(5, 20));

        System.out.println("The maximum of 5 and 20 is: " + Zoom8.Max(5, -20));

        System.out.println("The maximum of 5, 17, and -20 is: " + Zoom8.Max(Zoom8.Max(5, 17), -20));
    }
}
