/**
 * Michael Buckley
 * Apr 29, 2021
 * Intro to classes - employee class
 */

public class Student {
    // define objects variables
    String name;
    int age;
    char gender;
    boolean health; // insurance
    double balance;

    // methods
    void speak() {
        System.out.printf("Name: %-20s  Age: %-20s\n", name, age);
    }

    // method no cost for students older than 60 years of age
    void speak2(int a) {
        if (a >= 60) {
            System.out.printf("Good news %s, you qualify for free tuition!\n", name);
        }
        else {
            System.out.printf("Sorry %s, you did not qualify for free tuition. You will need to wait %d more years.\n", name, (60-a));
        }
    }

    // method to get balance
    double getBalance() {
        return balance;
    }

    // method to get age
    int getAge() {
        return age;
    }

    // method to get name
    String getName() { 
        return name;
    }

    // method to assign values to each student
    void setStudent(String s, int a, char g, double b, boolean h) {
        name = s;
        age = a;
        gender = g;
        balance = b;
        health = h;
    }

}
