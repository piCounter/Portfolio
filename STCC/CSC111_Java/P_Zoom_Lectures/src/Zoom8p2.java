/**
 * Michael Buckley
 * Mar 25, 2021
 * changing variable values inside a method do not effect the rest of the program unless the values are returned
 */

public class Zoom8p2 {
    public static void main(String[] args) {

        int n1 = 1;
        int n2 = 2;

        System.out.println("Main: Before invoking the Swap method:  n1 = " + n1 + ", n2 = " + n2);
        Swap(n1, n2);
        System.out.println("Main: After invoking the Swap method:  n1 = " + n1 + ", n2 = " + n2);

    }

    private static void Swap(int a, int b) {
        System.out.println("We are inside the method - Swap");

        // swap n1 and n2
        System.out.println("Swap: Before Swapping:  n1 = " + a + ", n2 = " + b);

        int empty = a;
        a = b;
        b = empty;

        System.out.println("Swap: After Swapping:  n1 = " + a + ", n2 = " + b);

    }
}
