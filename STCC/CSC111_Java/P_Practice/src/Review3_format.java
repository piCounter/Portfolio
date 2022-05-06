public class Review3_format {
    public static void main(String[] args) {
        
        final double squareMeterToPing = 1/3.305;
        final double pingToSquareMeter = 3.305;

        System.out.println("\nPing\tSquare meter | Square meter\tPing");


        for (int ping = 10, squareMeter = 30; ping < 80 || squareMeter <= 100; ping += 5, squareMeter += 5) {
            System.out.printf("%2d%18.3f | %3d%18.3f\n", ping, ping*pingToSquareMeter, squareMeter, squareMeter*squareMeterToPing);

        }
        

    }
    
}
