/**
 * Michael Buckley
 * Apr 30, 2021
 * Homework 9 part 2
 */

public class Stock {

    // class variables
    String symbol, name;
    double previousClosingPrice, currentPrice;

    // default constructor
    public Stock() {
        this.symbol = "";
        this.name = "";
    }

    // user defined constructor
    public Stock(String s, String n) {
        this.symbol = s;
        this.name = n;
    }

    // method returns change
    double getChangePercent() {
        // ((y-x) / y) * -100
        return ((this.previousClosingPrice - this.currentPrice) / this.previousClosingPrice) * -100;
    }

}
