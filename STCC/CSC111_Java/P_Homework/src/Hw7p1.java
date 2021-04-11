/**
 * Michael Buckley
 * Apr 9, 2021
 * Homework 7 part 1
 */

public class Hw7p1 {
    public static void main(String[] args) {

        // variable decliration
        int size = 5;
        int[] user = {40, 4, 13, 56, 25};
        int[] lottery = new int[size];
        int matches = 0;
        int attempts = 0;
        
        while (matches != 5) {
            // loop variables
            attempts += 1;
            matches = 0;

            // draw lottery numbers
            draw(lottery);

            // print lottery numbers
            System.out.print("\n\nLottery Array: ");
            for (int i=0;i < size; i++) {
                System.out.printf("%d ",lottery[i]);
            }

            // print user numbers
            System.out.print("\nTicket Array: ");
            for (int i=0;i < size; i++) {
                System.out.printf("%d ",user[i]);
            }

            // compare user to lottery
            for (int i=0;i < size; i++) {
                if (lottery[i] == user[i]) {
                    if (matches == 0)
                        System.out.print("\n\tMatching Numbers: ");
                    matches += 1;
                    System.out.printf("%d ", lottery[i]);
                }
            }
            if (matches == 5)
                System.out.println("\n ~ PERFECT MATCH in " + attempts + " attempts.\n");
        } 
    }

    private static void draw(int[] lot) {
        for (int i=0; i < lot.length; i++) 
            lot[i] = (int)(Math.random() * 69);
    }

    
}
