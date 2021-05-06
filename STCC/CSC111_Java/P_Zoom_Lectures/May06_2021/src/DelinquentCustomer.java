
public class DelinquentCustomer extends Customer {
    int idNumber;
    double balanceOwed;
    double chargedRate;

    public DelinquentCustomer(int id, double bal, double rate) {
        super(id, bal);
        // idNumber = id; // inherited from Customer.java //
        // balanceOwed = bal;
        chargedRate = rate;
    }

    // @Override
    public void display() {
        super.display(); // pulls method from parent class instead of local class by adding super.
        System.out.println(/**"Customer # " + idNumber + " Balance $" + balanceOwed + */" Charged rate is " + chargedRate);
    }
}
