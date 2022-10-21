#include<stdio.h>
#include<locale.h>

void main()
{
	int a, b;
	setlocale(LC_ALL, "RUS");
	puts("Введите значения сторон А и В");
	scanf("%d%d",&a, &b);
	printf("Периметр вашего прямоугольника = %d\n", 2 * a + 2 * b);
	printf("Площадь вашего прямоугольника = %d\n",  a * b);

}
