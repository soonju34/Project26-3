#include < stdio.h > 

int str_len(const char* s)
{
	const char* p = s;

	while (*s)
		s++;

	return s - p;
}

int main(void)
{
	char str[256];

	printf("���ڿ�: ");
	scanf_s("%s", str);

	printf("�� ���ڿ��� %d �����Դϴ�.\n", str_len(str));

	return 0;
}