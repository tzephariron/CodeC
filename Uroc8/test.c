#include <stdio.h>

int main(int args, char *argv[])
{
    int two = 2;
    float b = (double)two;
    float a = 3 / (two + 0.0);
    printf("%1.1f\n",b);
    float decimal = 5.2;
    int s = (int)decimal;
    printf("%d\n",s);
    int free = 3;

    int f = 4;
    printf("%1.1f\n",two + 0.0); // к типу int  прибовляю 0.0 (2 + 0.0 = 2.0)
    printf("%1.1f\n",(float)free); // явное привидение к типу float
    int index = (f/(double)two); // 4 / 2.0 == 2
    printf("%d\n", index);
    
}