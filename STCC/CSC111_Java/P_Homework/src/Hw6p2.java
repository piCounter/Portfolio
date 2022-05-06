/**
 * Michael Buckley
 * Apr 1, 2021
 * Homework 6 part 2
 */

 import java.util.Scanner;
 
 public class Hw6p2 {
     
    public static void main(String[] args) {

        // variable decliration
        Scanner input = new Scanner(System.in);
        Boolean patient = false;
        char x='a';
        int days=0;
        double dailyRate=-1, medicationCharges=-1, servicesCharges=-1, charges=0;

        // in-patient vs out-patient
        while (x != 'i' && x != 'o') {
            System.out.print("Is the patient admitted as an in-patient or out-patient? (i or o) ");
            x = input.next().charAt(0);
            x = Character.toLowerCase(x);

            patient = x == 'i'; // if in-patient, then true, else if out-patient then false
        }

        // collect hospital charges and service charges
        while (medicationCharges < 0) {
            System.out.print("Total medication charges: $");
            medicationCharges = input.nextDouble();
            if (medicationCharges < 0)
                System.out.print("Error - Enter a number greater than 0\n");
        }
        
        while (servicesCharges < 0) {
            System.out.print("Total hospital services charges: $");
            servicesCharges = input.nextDouble();
            if (servicesCharges < 0)
                System.out.print("Error - Enter a number greater than 0\n");
        }

        if (patient) { // in-patient
            // days
            while (days < 1) {
                System.out.print("Days spent in the hospital?: ");
                days = input.nextInt();
                if (days < 1)
                    System.out.print("Error - Enter a number greater than 0\n");
            }
            // daily rate
            while (dailyRate < 0) {
                System.out.print("Daily rate: $");
                dailyRate = input.nextDouble();
                if (dailyRate < 0)
                    System.out.print("Error - Rate can not be negative\n");
            }

            // calculations for in-patient
            charges = inPatient(days, dailyRate, medicationCharges, servicesCharges);
        }
        else if (!(patient)) { // out-patient
            // calculations for out-patient
            charges = outPatient(servicesCharges, medicationCharges);
        }

        // output
        System.out.printf("\nThe total charges for this patient are $%,.2f\n", charges);

        // close scanner
        input.close();
    }

    private static double outPatient(double servicesCharges, double medicationCharges) {

        // calculate out-patient charges

        double totalCharges = servicesCharges + medicationCharges;
        return totalCharges;
    }

    private static double inPatient(int days, double dailyRate, double medicationCharges, double servicesCharges) {

        // calculate in-patient charges

        double totalCharges = servicesCharges + medicationCharges + (days  * dailyRate);
        return totalCharges;
    }
}