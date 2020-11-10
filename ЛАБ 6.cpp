#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Rus");
	const int m = 3;
	const int n = 3;
	int  i, j, k, T, x;
	int mt[n][m];
	printf("Заполните массив\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d ", &mt[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < m; j++)
			printf("%d ", mt[i][j]);
	}

	for (k = 0; k < m; k++)
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++) {
				if (mt[i][k] >= 0 || mt[j][k] >= 0)
					continue;
				if (mt[i][k] > mt[j][k]) // Сравниваем данные  элементы
				{
					T = mt[i][k];
					mt[i][k] = mt[j][k]; // Меняем значения этих элементов местами
					mt[j][k] = T;
				}
			}
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < m; j++)
			printf("%d ", mt[i][j]);
	}
	return 0;
}