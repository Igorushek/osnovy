#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
int main(void)
{
	float s; //сумма ряда
	float a; // очередной элемент ряда
	float i; // номер очередного элемента ряда
	int n; // число элементов ряда
	int sign; // знак очередного элемента ряда
	// ввод параметров ряда
	printf("n=");
	scanf("%d", &n);
	//начальное присваивание элементов
	s = 0;
	sign = 1;
	i = 0;
	while (i < n) // цикл
	{
		i++;
		a = (2 + i) / (i*(i + 1));
		s = s + a * sign;
		sign = -sign;
	}
	printf("s = %f \n", s); // вывод резульната
	getch();
	return 0;
}