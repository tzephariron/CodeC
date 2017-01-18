#include <stdio.h>

int main(void){
	int a = 10, b = 20, c = 3, d = 2, e = 4;
	/*
	int itog = 0, itog2 = 0;
	itog = a + b - c * d / e;
	itog2 = (a + b) - ((c * d)/ e);
	printf("Итого: %d\n", itog);
	printf("Итого2: %d\n", itog2);
	*/
	printf("Сложение Addition %d\n", a + b);
	printf("Вычетание Substraction %d\n", b - a);
	printf("Умножение Multiplication %d\n", d * e);
	printf("Деление Division %d\n", e / d);
	printf("Остаток от деления remaider division %d\n", a % d);
	printf("Инкримент Increment %d\n", ++e);
	printf("Постфиксный Инкримет %d\n", a++);
	printf("%d - a\n", a);
	printf("Декремент Decrement %d\n", --d);
	printf("Постфиксный Декремент %d\n", e--);
	printf("%d - e\n", e);
}