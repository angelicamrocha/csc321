//Angelica Rocha
//lab 3
import java.util.Scanner;

public class arocha3 {
    public static void main(String[] args) {
        int x = 0;
        double y = 0.0;
        char c = 'v';
        float z = 1.2f;

        Scanner number = new Scanner(System.in);

        do {
            System.out.println("Enter a number between 1-5 inclusive:");
            x = number.nextInt();

            if (x < 1 || x > 5) {
                System.out.println("You have entered an incorrect number.");
            }
        } while (x < 1 || x > 5);

        String prize = "";
        switch (x) {
            case 1:
                prize = "a piano";
                break;
            case 2:
                prize = "a guitar";
                break;
            case 3:
                prize = "a flute";
                break;
            case 4:
                prize = "a violin";
                break;
            case 5:
                prize = "a saxophone";
                break;
            default:
                System.out.println("Wrong number"); 
                break;
        }

        for (int i = 0; i < x; i++) {
            System.out.println("You have won " + prize + "!");
        }

        number.close();
    }
}
