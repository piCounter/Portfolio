import jdk.internal.module.SystemModuleFinders;

/**
 * Michael Buckley
 * Apr 21, 2021
 * Intro to classes
 */

 import java.util.Scanner;

public class introToClasses {

    public static void main(String[] args) {

        // get the size of array
        Scanner input = new Scanner(System.in);
        int carNum = -1;
        
        do {
            System.out.println("How many cars do you have? ");
            carNum = input.nextInt();

        } while (carNum < 0 || carNUm > 100);

        // create the array
        Car ziggy[] = new Car[carNum];

        // load the array
        for (int c=0; c<carNum; c++) {
            System.out.println("Enter car " + (c+1) + " info: ");
            System.out.print("Enter car year: ");
            int year = input.nextInt();
            System.out.print("Enter car price: ");
            double price = input.nextDouble();
            System.out.print("Enter car make: ");
            input.nextLine(); // ignore
            String make = input.nextLine();
            System.out.println("Enter car model: ");
            String model = input.nextLine();
            System.out.print("Enter car miles: ");
            double miles = input.nextDouble();

            // assign all these values to the array
                ziggy[c] = new Car(y, p, mk, mo, m);
        }

        // list all the cars
        for (int c=0; c<carNum; c++) {
            System.out.printf("%4d %10.2f %-15s %-15s %8.2f\n", ziggy[c].getYear(), ziggy[c].getPrice(), ziggy[c].getMake(), ziggy[c].getModel(), ziggy[c].getMiles());
        }


        // double income;
        //  int ClassSize;
        //  Home Uncle = new Home();
        //  Uncle.Age = 32;
        //  Uncle.Type = "Ranch";
        //  Home Sister = new Home();
        //  Sister.ASSTValue = 178219.58;
        //  Sister.SqFT = 2107;
        //  System.out.println("My uncle ownes a " + Uncle.Type + " That is " + Uncle.Age + " years old");

        //  Employee Clerk = new Employee();
        //  Employee Driver = new Employee();
        //  Clerk.setEmpNum(355);
        //  Clert.setEmpFname("Joe");
        //  Clert.setEmpLname("Smith");
        //  Clert.setEmpSalary(38244.59);

        //  Driver.setEmpFname(".");
        //  Driver.setEmpLname(".");
        //  Driver.setEmpNum(238);
        //  Driver.setEmpSalary(7582938);

        // System.out.println(Clerk.getEmpFname() + " " + Clerk.getEmpLname() + " Salary is $" + Clerk.getSalary());
        // System.out.println(Driver.getEmpFname() + " " + Driver.getEmpLname() + " Salary is $" + Driver.getSalary());
    }
}
