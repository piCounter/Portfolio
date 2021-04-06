public class isPrime {
    
    public static void main(String[] args) {
        System.out.println("The first 73 prime numbers\n");
        printPrimeNumbers();

    }
    public static void printPrimeNumbers(int n) {
        int count = 0;
        int num = 2;
        while (count < n) 
            if (isPrime(num)) {
                count ++;
                if (count % 8 == 0)
                    System.out.printf("%-6d\n", num);
                else
                    System.out.printf("%-6d", num);

            }
    }
}
