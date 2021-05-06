
public class PreferredCustomer extends Customer {
    // int idNumber;
    // double balanceOwed;
    double discountRate;

    public PreferredCustomer(int id, double bal, double rate) {
        super(id, bal);
        // idNumber = id;
        // balanceOwed = bal;
        discountRate= rate;
    }

    public void show() {
        System.out.println("Customer # " + idNumber + " Balance $" + balanceOwed + " Discount rate is " + discountRate);
    }
}
