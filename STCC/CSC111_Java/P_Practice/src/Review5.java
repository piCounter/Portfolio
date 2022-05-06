import java.util.Scanner;

public class Review5 {

    // Method that calculates area of circle
    public static double circleArea(double radius) {

        double area;
        area = Math.PI * radius * radius;

        return area;
    }

    public static int larger(int num1, int num2) {
        int answer;
        if (num1 > num2)
            answer = num1;
        else 
            answer = num2;
        
        return answer;
    }
    public static void main(String[] args) {

        double circleArea1;
        double radius1 = 0;
        double circleArea2;
        double radius2;
        double circleArea3;
        double radius3;

        Scanner input = new Scanner(System.in);

        System.out.println("What is radius of circle 1: ");
        radius1 = input.nextDouble();
        System.out.println("What is radius of circle 2: ");
        radius2 = input.nextDouble();
        System.out.println("What is radius of circle 3: ");
        radius3 = input.nextDouble();
    
        circleArea1 = circleArea(radius1);
        System.out.println("Area of circle 1: " + circleArea1);

        System.out.println("Area of circle 1: " + circleArea(radius2));

        
    }
}
