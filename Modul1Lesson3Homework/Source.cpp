#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� ������� ");
		scanf("%d", &n);
	if (n == 1) {
		// ��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������
		int x = 0, A = 0, y = 0, d = 0, s = 0;
		printf("������� ���������� �� ");
		scanf("%d", &x);
		printf("������� ��������� ");
		scanf("%d", &A);
		printf("������� ���������� ������ Y ");
		scanf("%d", &y);
		d = A / x;
		s = d*y;
		printf("��������� 1 �� = %d\t ��������� ������ Y = %d\n", d, s);
	}
	else if (n == 2) {
		//������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B (����������� A �� ����� 0)
		float A = 0, B = 0;
		printf("������� �������� � ");
		scanf("%d", &A);
		if (A == 0) {
		printf("�������� � �� ������ ���� ����� 0, ������� ���� ��������\n");
		printf("������� �������� � ");
		scanf("%d", &A);
		if (A == 0) {

		}
		else {
		printf("������� �������� B ");
		scanf("%d", &B);
		float x = 0.0;
		x = -B / A;
		printf("�������� � = %f\n", x);
		}
		}
		else {
			
		}

	}

}
