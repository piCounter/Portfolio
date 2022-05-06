public class Student2 {
    private int id;
    private String name;
    private java.util.Date dateCreated;

    // create constructor
    public Student2(int sNum, String sName) {
        id = sNum;
        name = sName;
        dateCreated = new java.util.Date();
    }

    // method to getId
    public int getId() {
        return id;
    }

    // method to getName
    public String getName() {
        return name;
    }

    // method to getDate
    public java.util.Date getDateCreated() {
        return dateCreated;
    }

    
}
