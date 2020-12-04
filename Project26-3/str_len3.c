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

	printf("문자열: ");
	scanf_s("%s", str);

	printf("이 문자열은 %d 문자입니다.\n", str_len(str));

	return 0;
}