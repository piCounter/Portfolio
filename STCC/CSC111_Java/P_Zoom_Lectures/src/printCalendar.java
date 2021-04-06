
/**
 * Michael Buckley
 * Mar 31, 2021
 * Prints a calender to the screen for the chosen month of any year on or after 0 AD
 */

import java.util.Scanner;

public class printCalendar {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // prompt the user to enter year
        System.out.print("Enter full year (e.g., 2021): ");
        int year = input.nextInt();

        // prompt the user to enter a month
        System.out.print("Enter month as a number between 1 and 12: ");
        int month = input.nextInt();
        printMonth(year, month);

        System.out.println();
        input.close();
    }

    public static void printMonth(int year, int month) {
        // print the heading
        printMonthTitle(year, month);

        // print the body of the calendar
        printMonthBody(year, month);
    }

    public static void printMonthTitle(int year, int month) {

        System.out.println("\n            " + getMonthName(month) + "        " + year);
        System.out.println("--------------------------------------");
        System.out.println("   Sun  Mon  Tue  Wed  Thu  Fri  Sat");
    }

    public static void printMonthBody(int year, int month) {
        // get start day
        int startDay = getStartDay(year, month);
        // get number of days in the month
        int numberOfDays = getNumberofDays(year, month);

        // pad space before the first day of the month
        int i;
        startDay = startDay % 7;
        for (i = 0; i < startDay; i++)
            System.out.print("     ");

        for (i = 1; i <= numberOfDays; i++) {
            System.out.printf("%5d", i);
            if ((i + startDay) % 7 == 0)
                System.out.println();
        }
    }

    public static int getNumberofDays(int year, int month) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            return 31;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else if (month == 2) {
            if (isLeapYear(year))
                return 29;
            else
                return 28;
        } else
            return 0;
    }

    private static boolean isLeapYear(int year) {
        return (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
    }

    public static int getStartDay(int year, int month) {
        // get the number of days from 1/1/1583 to month/1/year including leap year
        int total = 6; // which day of the week does the first day of the year fall on (e.g. 0-sun,
                       // 1-mon)
        for (int epoch = 1583; epoch < year; epoch++) { // change epoch value to your chosen start year
            if (isLeapYear(epoch))
                total = total + 366;
            else
                total = total + 365;
        }

        // add the days from Jan to the month
        for (int i = 1; i < month; i++)
            total = total + getNumberofDays(year, i);
        return total;
    }


    public static String getMonthName(int month) {
        String monthName = " ";
        switch (month) {
        case 1:
            monthName = "January";
            break;
        case 2:
            monthName = "February";
            break;
        case 3:
            monthName = "March";
            break;
        case 4:
            monthName = "April";
            break;
        case 5:
            monthName = "May";
            break;
        case 6:
            monthName = "June";
            break;
        case 7:
            monthName = "July";
            break;
        case 8:
            monthName = "August";
            break;
        case 9:
            monthName = "September";
            break;
        case 10:
            monthName = "October";
            break;
        case 11:
            monthName = "November";
            break;
        case 12:
            monthName = "December";
            break;
        }
        return monthName;
    }
}
