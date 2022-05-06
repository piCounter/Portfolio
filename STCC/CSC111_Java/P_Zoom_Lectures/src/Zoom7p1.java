/**
 * Michael Buckley
 * Mar 11, 2021
 * Nested loops
 */


public class Zoom7p1 {
    public static void main(String[] args) {

        int size = 12;
        String headerTxt = "Multiplication Table";

        // display header
        System.out.println(headerTxt);
        System.out.print("x  |");
        for (int temp = 0; temp <= size; temp++)
            System.out.printf("%4d", temp);
        System.out.println("\n--------------------------------------------------------");

        //display the table body
        for (int x = 0; x <= size; x++) {
            if (x < 10) {
                System.out.print(x + "  |");
                for (int y = 0; y <= size; y++) 
                    System.out.printf("%4d", x*y);
                System.out.println();
            }
            else {
                System.out.print(x + " |");
                for (int y = 0; y <= size; y++) 
                    System.out.printf("%4d", x*y);
                System.out.println();
            }
        }
    }
}