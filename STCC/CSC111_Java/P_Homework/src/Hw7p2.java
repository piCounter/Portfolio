/**
 * Michael Buckley
 * Apr 9, 2021
 * Homework 7 part 2
 */

import java.util.Scanner;
import java.util.Arrays;

public class Hw7p2 {
    public static void main(String[] args) {
        // variable decliration
        Scanner input = new Scanner(System.in);

        System.out.println("What size is your first list? ");
        int list1size = input.nextInt();
        int[] list1 = new int[list1size];
        System.out.println("Enter your list seperated by spaces: ");
        for (int i = 0; i < list1size; i++) {
            list1[i] = input.nextInt();
        }
        System.out.println("What size is the second list? ");
        int list2size = input.nextInt();
        int[] list2 = new int[list2size];
        System.out.println("Enter your list seperated by spaces: ");
        for (int i = 0; i < list2size; i++) {
            list2[i] = input.nextInt();
        }

        int[] temp = merge(list1, list2);
        for (int i = 0; i < temp.length; i++) 
            System.out.printf("%d ", temp[i]);

        input.close();
    }

    public static int[] merge(int[] list1, int[] list2) {
        int[] list = new int[(list1.length + list2.length)];
        for (int i = 0; i < list1.length; i++)
            list[i] = list1[i];
        for (int i = 0; i < list2.length; i++)
            list[(i + list1.length)] = list2[i];
        Arrays.sort(list);
        return list;
    }

    
}
