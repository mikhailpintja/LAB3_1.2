// Lab3_1(var2).c: Обчислення b за заданими умовами.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>

float b; //Результат обчислень//
int main()
{
	int a;
	float c;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть цiле число зi списку (2, 4, 6)");
	printf("\n Значення a=");
	scanf("%d", &a);
	printf("\n Введiть будь-яке дiйсне число");
	printf("\n Значення c=");
	scanf("%f", &c);
	if (a != 2 && a != 4 && a != 6) printf("\n Введенe значення а= %d не вiдповiдає запропонованим.\n Обчислення не можливе", a);
	else if (a == 2 && c == 0) printf("\n Введене значення при a=%d с=%.3f призведе до дiлення на 0.", a, c);
	else if (a == 4 && (a * c - 2 * a) < 0) printf("\n Введенi Вами числа a= %d с= %.3f не припустимi (корiнь з вiд’ємного числа)", a, c);
	else if (a == 2) b = (pow(a, 2) - 4 * c) / a * c, printf("\n Отриманий результат b= %5.3f", b);
	else if (a == 4) b = sqrt(a * c - 2 * a), printf("\n Отриманий результат b= %5.3f", b);
	else if (a == 6) b = (pow(c, 2) - 2 * a), printf("\n Отриманий результат b= %5.3f", b);
	int getch(); getch();
	return 0;
}
