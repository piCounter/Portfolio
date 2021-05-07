/**
 * Michael Buckley
 * May 7, 2021
 * Homework 10
 */

public class Package {

    // class variables
    private double weight;
    private char shippingMethod;
    public double shippingCost;
    // setPrices
    private double a1=2.00, t1=1.50, m1=0.50, 
            a9=3.00, t9=2.35, m9=1.50, 
            a17=4.50, t17=3.25, m17=2.15;
            
    // default constructor
    public Package() {
        this(1, 'M');
        this.shippingCost = calculatesCost();
    }

    // user defined constructor
    public Package(double weight, char shippingMethod){
        this.weight = weight;
        this.shippingMethod = shippingMethod;
        this.shippingCost = calculatesCost();
    }

    // private method
    private double calculatesCost() {

        if (this.weight > 0 && this.weight < 9) {
            if (this.shippingMethod == 'A') {
                return a1;
            }
            else if (this.shippingMethod == 'T') {
                return t1;
            }
            else if (this.shippingMethod == 'M') {
                return m1;
            }
        }
        else if (this.weight > 8 && this.weight < 17) {
            if (this.shippingMethod == 'A') {
                return a9;
            }
            else if (this.shippingMethod == 'T') {
                return t9;
            }
            else if (this.shippingMethod == 'M') {
                return m9;
            }
        }
        else if (this.weight >= 17) {
            if (this.shippingMethod == 'A') {
                return a17;
            }
            else if (this.shippingMethod == 'T') {
                return t17;
            }
            else if (this.shippingMethod == 'M') {
                return m17;
            }
        }
        return 0.69;
    }

    // public methods
    public double getWeight() {
        return this.weight;
    }

    public String getShippingMethod() {
        String temp="";
        if (this.shippingMethod == 'A') temp = "Air";
        else if (this.shippingMethod == 'T') temp = "Truck";
        else if (this.shippingMethod == 'M') temp = "Mail";
        return temp;
    }
    
    public double getShippingCost() {
        return this.shippingCost;
    }
    
    public void setWeight(double weight) {
        this.weight = weight;
    }
    
    public void setShippingMethod(char shippingMethod) {
        this.shippingMethod = shippingMethod;
    }

    public void setShippingCost(double shippingCost) {
        this.shippingCost = shippingCost;
    }

    public void display() {
        // display header
        System.out.printf("\n%-15s %-15s %-15s %-15s","Weight (oz)", "Air", "Truck", "Mail");
        System.out.printf("\n%-15s$%-14.2f$%-14.2f$%-14.2f", "1 to 8", a1, t1, m1);
        System.out.printf("\n%-15s$%-14.2f$%-14.2f$%-14.2f", "9 to 16", a9, t9, m9);
        System.out.printf("\n%-15s$%-14.2f$%-14.2f$%-14.2f", "17 and over", a17, t17, m17);
        System.out.println();
    }
}
