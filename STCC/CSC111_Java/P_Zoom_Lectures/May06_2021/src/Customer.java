
/**
 * Michael Buckley
 * May 6, 2021
 * Class inheritance
 */

public class Customer {

    int idNumber;
    double balanceOwed;

    public Customer(int id, double bal) {
        idNumber = id;
        balanceOwed = bal;
    }

    public void display() {
        System.out.println("Customer # " + idNumber + " Balance $" + balanceOwed);
    }
}
