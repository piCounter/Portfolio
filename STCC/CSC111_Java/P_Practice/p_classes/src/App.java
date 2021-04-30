/*********************************************
 * Michael Buckley ***************************
 * Apr 29, 2021 ******************************
 * main program to run all test classes ******
 */

import java.util.Scanner;

public class App {
    public static void main(String[] args) {

        /** call outputs from previous videos
         *
         * chapter9video1();
         * chapter9video2();
         * chapter9video3();
         * 
         */
        
    
    


    }

    // creating objects in main from class
    private static void chapter9video1() {
        // create new object of Car called auto1
        Car auto1 = new Car();
        auto1.year = 2021;
        auto1.make = "BMW";
        auto1.miles = 123456;
        auto1.standard = false;
        auto1.price = 65324.12;
    
        // create new object of Car called auto2
        Car auto2 = new Car();
        auto2.make = "Volvo";
        auto2.standard = true;
    
        // display cars
        System.out.printf("%-10s \t %-5b\n", auto1.make, auto1.standard);
        System.out.printf("%-10s \t %-5b\n", auto2.make, auto2.standard);
    }
    
    // using methods from class
    private static void chapter9video2() {
        // create objects
        Student st1 = new Student();
        Student st2 = new Student();
        Student st3 = new Student();

        // initialize objects using a method
        st1.setStudent("Michael Buckley", 29, 'M', 1219, false);
        st2.setStudent("Zee Haddad", 62, 'M', 0, true);
        st3.setStudent("Lauren Brewer", 59, 'F', 492.21, true);
        
        // method interations
        st1.speak2(st1.age);
        st2.speak2(st2.age);
        st3.speak2(st3.age);
        System.out.println("____________________________");
        System.out.printf("%-15s %2d %7.2f\n", st1.getName(), st1.getAge(), st1.getBalance());
        System.out.printf("%-15s %2d %7.2f\n", st2.getName(), st2.getAge(), st2.getBalance());
        System.out.printf("%-15s %2d %7.2f\n", st3.getName(), st3.getAge(), st3.getBalance());
    
    }
    
    // storing objects in arrays
    private static void chapter9video3() {

        // create scanner
        Scanner input = new Scanner(System.in);

        // local variables
        int size = 0;

        // ask user for max class size but reject answers less than 1 and more than 100
        do {
            System.out.print("Enter the max class size: ");
            size = input.nextInt();
        } while(size<1 || size>100);

        // create the array
        Student2 java[] = new Student2[size];

        // load the array
        for (int count=0; count<size; count++) {
            System.out.printf("Enter student # %d's ID number: ", count+1);
            int n = input.nextInt();
            input.nextLine(); // error handler
            System.out.printf("Enter student %d's name: ", count+1);
            String na = input.nextLine();
            java[count] = new Student2(n, na);
        }

        // display the java class
        System.out.println("Student ID \t Student Name \t\t Date Created");
        System.out.println("______________________________________________");
        for (int k=0; k<size; k++) {
            System.out.printf("%-14d \t %-17s \t", java[k].getId(), java[k].getName());
            System.out.println(java[k].getDateCreated());
        }
    }

    // post lecture review with SI
    private static void p_reviewClasses() {
        
        Car[] carArray = new Car[5];
        Scanner input = new Scanner (System.in);

        for (int i=0; i<carArray.length; i++) {
            System.out.print("\nEnter the car " + (i+1) + " make: ");
            String make = input.next();

            System.out.print("Enter the car " + (i+1) + " model: ");
            String model = input.next();

            System.out.print("Enter the car " + (i+1) + " year: ");
            int year = input.nextInt();

            System.out.print("Enter the car " + (i+1) + " mileage: ");
            double mileage = input.nextDouble();

            carArray[i] = new Car(make, model, year, mileage);
        }

        System.out.println("Make     Model     Year     Mileage");
    }
}
