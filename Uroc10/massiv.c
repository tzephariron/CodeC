#include <stdio.h>
//int massiv[5]; одномерный массив
int main()
{
    int massiv[2][3] = {{'A','B','C'},{10,20,30}}; // многомерный массив
    printf("Elements [0][0] - %c\n", massiv[0][0]);
    printf("Elements [0][1] - %c\n", massiv[0][1]);
    printf("Elements [0][2] - %c\n", massiv[0][2]);
    printf("\n");
    printf("Elements [1][0] - %d\n", massiv[1][0]);
    printf("Elements [1][1] - %d\n", massiv[1][1]);
    printf("Elements [1][2] - %d\n", massiv[1][2]);
    printf("\n");

    massiv[1][0]=100;
    massiv[1][1]=200;
    massiv[1][2]=300;
    printf("Elements [1][0] - %d\n", massiv[1][0]);
    printf("Elements [1][1] - %d\n", massiv[1][1]);
    printf("Elements [1][2] - %d\n", massiv[1][2]);
}
