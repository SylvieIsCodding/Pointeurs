#include <stdio.h>
#include <stdlib.h>

int invertNumbers(int *num1,int *num2)
{
    int temp = 0;

    temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

int main()
{
    int a = 3, b = 5;

    invertNumbers(&a, &b); //Displaying the numbers after inversion

    printf ("Le premier chiffre est : %d ", a);
    printf ("Le deuxieme chiffre est : %d ", b);

}