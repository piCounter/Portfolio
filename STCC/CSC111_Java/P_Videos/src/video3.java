import java.util.Scanner;

public class video3 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double length, width, height;
        String name;
        
        System.out.print("Enter your name: ");
        name = input.nextLine();
        System.out.print("Enter the length: ");
        length = input.nextDouble();
        System.out.print("Enter the width: ");
        width = input.nextDouble();
        System.out.print("Enter the height: ");
        height = input.nextDouble();
        
        double sum = length + width + height;
        System.out.println("The sum of the 3 numbers is " + sum);
        System.out.println("Thank you " + name + "!");

        input.close();
    }
}
