#include <stdio.h>
//#define ИМЯ_КОНСТАНТЫ "текстовая строка"
#define NUM 1000
#define AUTHOR "Valery"
//#define NUMBER16 0x0123456789ABCDEF
#define LINE "___________________________"
#define SYMBOL "@#$%()*+-="
#define TITLE "C programming in easy"
#define NUMBER 101

int main()
{
    const int STO = 100;
    const int STROKA[NUMBER] = {1,2,3,4,5,6,7,8,9,10};
    printf("Const STO %d\n", STO);
    printf("%d\n", STROKA);
    printf("Const NUMBER = %d\n", NUMBER);
    printf("Const LINE = %s\n", LINE);
    printf("Const SYMBOL = %s\n", SYMBOL);
    printf("Const TITLE = %s\n", TITLE);
    printf("Const AUTHOR = %s\n", AUTHOR);
}