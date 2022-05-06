import java.util.Scanner;

public class Review3  {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        // // pyramid
        // System.out.print("Enter the number of line to print: ");
        // int numLines = input.nextInt();

        // // prints out the rows
        // for (int rows = 0; rows <= numLines; rows++) {
        //     for (int spaces = numLines - rows; spaces >= 1; spaces--) {
        //         System.out.print("  ");;
        //     }

        //     // create * to the left in each row
        //     for (int l = rows; l>= 2; l--) {
        //         System.out.print(l + " ");
        //     }

        //     // create * to the right in each row
        //     for (int r = 1; r <= rows; r++) {
        //         System.out.print(r + " ");
        //     }
        //     // creates new line between layers
        //     System.out.println();
        // }

        // input.close();

        // printing with format
        double x = 34.345645674;
        int i = 34;
        String str = "Printing with format!";
        
        System.out.printf("%s Integer: %d Double: %.2f\n", str, i, x);
        System.out.printf("Integer: %d Double: %9.2f\n",i, x);
        System.out.printf("Integer: %d Double: %.2f\n",i, x);
        System.out.printf("Integer: %9d Double: %.2e\n",i, x);




    }
}