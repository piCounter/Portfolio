package p_classes.src;

public class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String email;


    public Person() {
        this("John Smith");
    }
    public Person(String name) {
        this.name = name;
    }
    
    @Override
    public String toString() {
        return "Class name: Person\n" + name;
    }
}

class Student extends Person {
    // final String STATUS;

    // in the background the follwoing happens if nothing is in the construcor
    public Student() {
        super();
    }

}

class Employee extends Person {
    private String office;
    private double salary;
    private java.util.Date date;
}

class Faculty extends Employee {
    private String officeHours;
    private String rank;

}

class Staff extends Employee {
    private String title

}
