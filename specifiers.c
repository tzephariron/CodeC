#include <stdio.h>

int main()
{
	/*
	char letter = 'A';
	double decimal = 5.489;
	int number = 100;
	printf("%c - Символ:  \n", letter);
	printf("decimal = %g, number = %d\n", decimal, number);
	printf("%05.2g - decimal\n", decimal);
	*/
	int age, weight;
	char name[50]; // массив символов
	printf("Пожалуйста введите ваше имя: ");
	scanf("%s", name);
	printf("Введите ваш возраст: ");
	scanf("%d", &age);
	printf("Ведите ваш вес: ");
	scanf("%d", &weight);
	printf("Выведем нашу информацию: \n");
	printf("Ваше имя %s, ваш возраст %d лет, ваш вес - %d кг.\n", name, age, weight);
	printf("Адрес переменой name с нашем именем в памяти компьютера - %p\n", &name);
}