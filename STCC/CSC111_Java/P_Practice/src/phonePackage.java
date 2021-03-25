/**
 * Michael Buckley
 * Mar 25, 2021
 * Phone plans
 */

import java.util.Scanner;

public class phonePackage {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        String menu =   "\nA - $29.99/month 2GB and $10 any additional GB" + 
        "\nB - $39.99/month 4GB and $5 any additional GB" + 
        "\nC - $49.99/month unlimited data" + 
        "\n_______________________________________________\n" + 
        "\n  Please select a plan: ";
        
        System.out.print(menu);
        
        char plan = input.next().charAt(0);
        plan = Character.toUpperCase(plan);
        
        // validate the plan chosen
        while (plan != 'A' && plan != 'B' && plan != 'C') {
            System.out.println("You have entered an invalid plan");
            System.out.println(menu);
            plan = input.next().charAt(0);
            plan = Character.toUpperCase(plan);
        }
        
        // validate GB
        int gb = 0;
        do {
            System.out.println("How many GB do you need? ");
            gb = input.nextInt();
        } while(gb < 0 || gb > 100);

        // calculate the cost
        double cost = 0;
        switch (plan) {
            case 'A':
                if (gb <= 2)
                    cost = 29.99;
                else
                    cost = 29.99 + 10 * (gb - 2);
                break;
            case 'B':
                if (gb <= 2)
                    cost = 39.99;
                else
                    cost = 39.99 + 10 * (gb - 4);
                break;
            case 'C':
                cost = 49.99;
        }

        // display cost
        System.out.printf("You have selected plan %1s and your cost for %1d GB would be $%3.2f\n", plan, gb, cost);

        // define cost variables
        double cost1, cost2, cost3;
        if (gb <= 2)
            cost1 = 29.99;
        else
            cost1 = 29.99 + 10 * (gb - 2);
        if (gb <= 2)
            cost2 = 39.99;
        else
            cost2 = 39.99 + 10 * (gb - 4);
        cost3 = 49.99;

        // recommend plan
        if (cost1 < cost2 && cost1 < cost3) {
            System.out.print("\n\nWe recommend plan A for you. Your cost with this plan will be $" + cost1 + ". This is a savings of $");
            System.out.printf("%2.2f", cost1-cost*-1);
            System.out.println();
        }
        else if (cost2 < cost3 && cost2 < cost1) {
            System.out.print("\n\nWe recommend plan B for you. Your cost with this plan will be $" + cost2 + ". This is a savings of $");
            System.out.printf("%2.2f", cost2-cost*-1);
            System.out.println();
        }
        else if (cost3 < cost1 && cost3 < cost2) {
            System.out.print("\n\nWe recommend plan C for you. Your cost with this plan will be $" + cost3 + ". This is a savings of $");
            System.out.printf("%2.2f", cost3-cost*-1);
            System.out.println();
        }
        input.close();
    }
}
