#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("Введите номер задания ");
		scanf("%d", &n);
	if (n == 1) {
		// Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет
		int x = 0, A = 0, y = 0, d = 0, s = 0;
		printf("Введите количество кг ");
		scanf("%d", &x);
		printf("Введите стоимость ");
		scanf("%d", &A);
		printf("Введите количество конфет Y ");
		scanf("%d", &y);
		d = A / x;
		s = d*y;
		printf("стоимость 1 кг = %d\t стоимость конфет Y = %d\n", d, s);
	}
	else if (n == 2) {
		//Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0)
		float A = 0, B = 0;
		printf("Введите значение А ");
		scanf("%d", &A);
		if (A == 0) {
		printf("Значение А не должно быть равно 0, введите иное значение\n");
		printf("Введите значение А ");
		scanf("%d", &A);
		if (A == 0) {

		}
		else {
		printf("Введите значение B ");
		scanf("%d", &B);
		float x = 0.0;
		x = -B / A;
		printf("Значение х = %f\n", x);
		}
		}
		else {
			
		}

	}

}
