/**
 * Michael Buckley
 * Apr 8, 2021
 * review of arrays
 */

public class P_arrays {
    public static void main(String[] args) {
        
        double[] arrayOne = new double[5];
        double [] arrayTwo = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        String[] arrayString = {"Michael", "Joe", "Cam", "Sid", "Jesse", "Michael"};

        for (int i = 0; i < arrayString.length; < i++) {
            System.out.println(arrayString[i]);
        }

        for (String i : arrayString) { // for each loop " for each element in the array i will store that into "i" and then i will print "i"
            System.out.println(i);
        }

        arrayOne[0] = 2.2;
        arrayOne[4] = 67;

        for (int i = 0; i < arrayOne.length; i++) {
            arrayOne[i] = (int)(Math.random() * 10);
        }
        
        for (int i = 0; i < 5; i++) {
            System.out.println(arrayOne[i]);
        }


    }
}