/**
 * Michael Buckley
 * May 7, 2021
 * Homework 10
 */

public class InsuredPackage extends Package {
    
    // default constructor
    public InsuredPackage() {
        super(1, 'M');
    }

    // user defined constructor
    public InsuredPackage(double weight, char shippingMethod) {
        super(weight, shippingMethod);
        this.shippingCost = getShippingCost();
        this.shippingCost = getInsurancePremium();
    }

    private double getInsurancePremium() {
        double premium = 0;

        if (this.shippingCost >= 0 && this.shippingCost <= 1) {
            premium = 2.45;
        }
        else if (this.shippingCost >= 1 && this.shippingCost <= 3) {
            premium = 3.95;
        }
        else if (this.shippingCost >= 3) {
            premium = 5.55;
        }

        return (this.shippingCost + premium);
    }

    public double getShippingCost() {
        return this.shippingCost;
    }
}
