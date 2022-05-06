/**
 * Michael Buckley
 * Apr 8, 2021
 * review of arrays
 */

public class copyArrays {
    public static void main(String[] args) {
        
    
    int[] arr1 = {2, 1, 4};
    int[] arr2;

    arr2 = arr1; // uses the same memory location

    for (int i: arr2)
        System.out.print(i);
    
        arr2[2] = 5;

    // prints out array 2
    System.out.println("\n\narr2");
    for (int i: arr2)
        System.out.print(i + " ");

    // prints out array 1
    System.out.println("\narr1");
    for (int i: arr1)
        System.out.print(i + " ");







    arr1 = {2, 1, 4};
    arr2 = new int[arr1.length];

    for (int i = 0; i < arr1.length; i++) // copy a array and use a different memory location
        arr2[i] = arr1[i];

    }
}
