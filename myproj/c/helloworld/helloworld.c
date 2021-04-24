#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("\r\n hello world\r\n");
#ifdef WIN32
	getchar();
#endif // WIN32
	return 0;
}