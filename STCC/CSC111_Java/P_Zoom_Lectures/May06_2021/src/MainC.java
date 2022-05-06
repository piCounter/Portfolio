
public class MainC {
    public static void main(String[] args) {
        Customer cust1 = new Customer(130, 132.44);
        PreferredCustomer cust2 = new PreferredCustomer(144, 345.28, 15.0);
        DelinquentCustomer cust3 = new DelinquentCustomer(219, 88, 7.5);

        cust1.display();
        cust2.show();
        cust3.display();
    }
}
