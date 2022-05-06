

public class BaseballPlayer {
    private int jerseyNumber;
    private double battingAverage;

    public BaseballPlayer(int j, double b) {
        jerseyNumber = j;
        battingAverage = b;
    }

    public void showOrigins() {
        System.out.println("Jersey # " + jerseyNumber + " has a batting average = " + battingAverage);
        System.out.println("Abner Doubleday is ofter credited with inventing baseball");
    }
}