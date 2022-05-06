
import java.util.Scanner;

public class massMutual {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("How many employees do you have: ");
        int num = input.nextInt();
        String newLine, na, st, ci;
        int ag;
        double sa;

        // create an array of records
        Info[] Employees = new Info[num];

        // load the array
        // for (int i=0; i<num; i++) { // save all variables at once
        //     newLine = input.nextLine(); // skip the \n key - garbage handelin
        //     System.out.printf("Employee # %d\n", (i+1));
        //     System.out.print("\nName: ");
        //     na = input.nextLine();
        //     System.out.print("\nAge: ");
        //     ag = input.nextInt();
        //     newLine = input.nextLine();
        //     System.out.print("\nStreet: ");
        //     st = input.nextLine();
        //     System.out.print("\nCity: ");
        //     ci = input.nextLine();
        //     System.out.print("\nSalary: ");
        //     sa = input.nextDouble();

        //     Employees[i] = new Info(na, ag, st, ci, sa); // does Not need to be imported because both files are in the same project and are public
        // }

        // or
        
        // load the array
        // for (int i=0; i<num; i++) {  // save each variable indepently of one another
        //     newLine = input.nextLine(); // skip the \n key - garbage handelin
        //     System.out.printf("Employee # %d\n", (i+1));
        //     System.out.print("\nName: ");
        //     na = input.nextLine();
        //     Employees[i].setName(na);
        //     System.out.print("\nAge: ");
        //     ag = input.nextInt();
        //     Employees[i].setAge(ag);
        //     newLine = input.nextLine();
        //     System.out.print("\nStreet: ");
        //     st = input.nextLine();
        //     Employees[i].setStreet(st);
        //     System.out.print("\nCity: ");
        //     ci = input.nextLine();
        //     Employees[i].setCity(ci);
        //     System.out.print("\nSalary: ");
        //     sa = input.nextDouble();
        //     Employees[i].setSalary(sa);
        // }
        
        // sum of the salaries
        double sum = 0;
        for (int i=0; i<num; i++) {
            sum += Employees[i].salary;
        }
        System.out.printf("The total salaries of all employees is $%9.2f", sum);

        // close scanner
        input.close();
    }
    
}
