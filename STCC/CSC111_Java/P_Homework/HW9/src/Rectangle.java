/**
 * Michael Buckley
 * Apr 30, 2021
 * Homework 9 part 1
 */

public class Rectangle {

    // class variables
    double width = 1, height = 1;

    // default constructor
    public Rectangle() {
        this.width = 1;
        this.height = 1;
    }

    // user defined constructor
    public Rectangle(double w, double h) {
        this.width = w;
        this.height = h;
    }

    // method return area of object
    double getArea() {
        return (this.width * this.height);
    }

    // method return permeter of object
    double getPermeter() {
        return ((this.width + this.height) * 2);
    }

}
