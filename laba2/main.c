#pragma warning(disable : 4996) //���������� ��� ������������� ���������� ������� (scanf)
#include <stdio.h>
int main(void)
{
	float s; //����� ����
	float a; // ��������� ������� ����
	float i; // ����� ���������� �������� ����
	int n; // ����� ��������� ����
	int sign; // ���� ���������� �������� ����
	// ���� ���������� ����
	printf("n=");
	scanf("%d", &n);
	//��������� ������������ ���������
	s = 0;
	sign = 1;
	i = 0;
	while (i < n) // ����
	{
		i++;
		a = (2 + i) / (i*(i + 1));
		s = s + a * sign;
		sign = -sign;
	}
	printf("s = %f \n", s); // ����� ����������
	getch();
	return 0;
}