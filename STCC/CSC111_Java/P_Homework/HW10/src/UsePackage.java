/**
 * Michael Buckley
 * May 7, 2021
 * Homework 10
 */


public class UsePackage {

    public static void main(String[] args) {

        // Package objects
        Package cheapBox1 = new Package(2.0, 'M');
        Package cheapBox2 = new Package(11.2, 'T');
        Package cheapBox3 = new Package(49.6, 'A');

        // InsuredPackage objects
        Package expensiveBox1 = new InsuredPackage(2.0, 'M');
        Package expensiveBox2 = new InsuredPackage(11.2, 'T');
        Package expensiveBox3 = new InsuredPackage(49.6, 'A');

        // Package objects output
        System.out.printf("cheapBox1 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", cheapBox1.getWeight(), cheapBox1.getShippingMethod(), cheapBox1.getShippingCost());

        System.out.printf("cheapBox2 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", cheapBox2.getWeight(), cheapBox2.getShippingMethod(), cheapBox2.getShippingCost());

        System.out.printf("cheapBox3 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", cheapBox3.getWeight(), cheapBox3.getShippingMethod(), cheapBox3.getShippingCost());

        System.out.println();

        // InsuredPackage objects output
        System.out.printf("expensiveBox1 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", expensiveBox1.getWeight(), expensiveBox1.getShippingMethod(), expensiveBox1.getShippingCost());

        System.out.printf("expensiveBox2 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", expensiveBox2.getWeight(), expensiveBox2.getShippingMethod(), expensiveBox2.getShippingCost());

        System.out.printf("expensiveBox3 is %1.2foz and is shipping via %-2s, and will cost $%1.2f\n", expensiveBox3.getWeight(), expensiveBox3.getShippingMethod(), expensiveBox3.getShippingCost());


    }
}
