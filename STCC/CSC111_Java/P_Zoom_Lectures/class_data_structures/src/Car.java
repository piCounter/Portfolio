public class Car {
    int year;
    double price;
    String make;
    String model;


    // create a constructor
    public Car(int y, double p, String mk, String mo, double m) {
        year = y;
        price = p;
        make = mk;
        model = mo;
        miles = m;

    }

    public int getYear() {
        return this.year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public double getPrice() {
        return this.price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getMake() {
        return this.make;
    }

    public void setMake(String make) {
        this.make = make;
    }

    public String getModel() {
        return this.model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public double getMiles() {
        return this.miles;
    }

    public void setMiles(double miles) {
        this.miles = miles;
    }
    double miles;
}
