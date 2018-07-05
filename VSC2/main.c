// main.c
//
#include "SPUFIconvert.h"

int main(void)
	{
	char	*str;
	char	sfromi[32];
	char 	strtoi[12] = " 123456 ";
	int 	num = 13;
	printf("It should print 13\n");
	str = s_itoa(num, sfromi, 10);
	printf("****** %s", sfromi);
	printf("    ****\n");
	
	printf("It should print 123456\n");
	printf("**** %d", s_atoi(strtoi));
	printf("    ****\n");

	}
