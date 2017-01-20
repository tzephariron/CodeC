#include <stdio.h>
int main()
{
    char array[7] = {'S','t','r','i','n','g','\0'};
    char string[] = {"Stroka"};
    int number[4]; // ={10,20,100,250};
    number[0] = 10;
    number[1] = 20;
    number[2] = 100;
    number[3] = 250;
    for(int i=0; i<7; i++)
    {
        printf("%c", string[i]);
        if(i == 6){printf("\n");}
    }
    for(int i=0; i<7; i++)
    {
        printf("%c", array[i]);
        if(i == 6){printf("\n");}
    }
    printf("1 element 10 = %d\n",number[0]);
    printf("2 element 20 = %d\n",number[0]);
    printf("3 element 100 = %d\n",number[0]);
    printf("4 element 250 = %d\n",number[0]);

}