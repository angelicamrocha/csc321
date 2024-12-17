//Angelica Rocha
//csc-321
//lab 6

#include <stdio.h>
#include <stdlib.h>

// Extra credit function for modulus
int mod(int a, int b)
{
    return a % b;
}

int main(void)
{
    int x = 5;
    int y = 11;
    double result1 = 0;
    double result2 = 0;
    double result3 = 0;

    
    result1 = (double)x + (double)y * (double)x / (double)y - (double)x;
    result2 = -(double)x - (double)y / (double)x * (double)y + (double)x;
    result3 = (double)x + (double)y - (double)x / (double)y;

    printf("Your first result using int is %lf \n", result1);
    printf("Your second result using int is %lf \n", result2);
    printf("Your third result using int is %lf \n", result3);

   
    double z = 5;
    double w = 11;
    result1 = z + w * z / w - z;
    result2 = -z - w / z * w + z;
    result3 = z + w - z / w;

    printf("Your first result using double is %lf \n", result1);
    printf("Your second result using double is %lf \n", result2);
    printf("Your third result using double is %lf \n", result3);

    
    int a = -7, b = 3;
    printf("Extra credit operation: %d\n", mod(a, b));

    return EXIT_SUCCESS;
}
