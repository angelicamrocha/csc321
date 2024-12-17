//Angelica Rocha
//lab 6 java

import java.util.Scanner;

public class ArithmeticEvaluation
{
    public static int mod(int a, int b)
    {
        int result= a % b;
	if (result<0)
	{
	result +=b;
	}
	return result;	
    }

    public static void main(String[] args)
    {
        int x = 5;
        int y = 11;
        double result1 = 0;
        double result2 = 0;
        double result3 = 0;

      
        result1 = (double) x + (double) y * (double) x / (double) y - (double) x;
        result2 = -(double) x - (double) y / (double) x * (double) y + (double) x;
        result3 = (double) x + (double) y - (double) x / (double) y;

        System.out.printf("Your first result using int is %.6f \n", result1);
        System.out.printf("Your second result using int is %.6f \n", result2);
        System.out.printf("Your third result using int is %.6f \n", result3);

       
        double z = 5;
        double w = 11;
        result1 = z + w * z / w - z;
        result2 = -z - w / z * w + z;
        result3 = z + w - z / w;

        System.out.printf("Your first result using double is %.6f \n", result1);
        System.out.printf("Your second result using double is %.6f \n", result2);
        System.out.printf("Your third result using double is %.6f \n", result3);

        
        int a = -7, b = 3;
        System.out.println("Extra credit operation: " + mod(a, b));
    }
}

