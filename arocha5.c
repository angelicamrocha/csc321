//Angelica Rocha 
//lab 5

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  
    int x = 5;
    float y = 3.14;
    char z = 'A';
    double w = 9.81;

    printf("Address of x (int): %p, Value: %d\n", (void*)&x, x);
    printf("Address of y (float): %p, Value: %.2f\n", (void*)&y, y);
    printf("Address of z (char): %p, Value: %c\n", (void*)&z, z);
    printf("Address of w (double): %p, Value: %.2f\n", (void*)&w, w);

    if (1) {
        int scopedVar = 42;
  	printf("Scoped variable (inside if block): %d\n", scopedVar);
    }
   
    int ar[10];
    for (int i = 0; i < 10; i++) {
        ar[i] = i + 1; 
    }

    printf("\nPrinting array elements with addresses:\n");
    for (int i = 0; i < 10; i++) {
        printf("ar[%d] = %d, Address: %p\n", i, ar[i], (void*)&ar[i]);
    }

    return EXIT_SUCCESS;
}
