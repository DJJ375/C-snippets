// SPUFIconvert.c
//
#include "SPUFIconvert.h"

int 	s_atoi(const char* str)
		{
		/* assuming the integer is positive */
		int 	num = 0;
		int 	len;
		int 	i, j, k, m, firstdigitpos, lastdigitpos, n=0;
		double 	x,y,z;
		char	dummy[32];	

		len = strlen(str);
		
		for (i = 0; i < len; i++)
			{

/*			printf("%d ", str[i]); 
*/
			if (str[i] == ' ')
				{				
/*				printf("blank "); 
*/
				continue;
				}
			else
				break;
			}

		firstdigitpos = i;

		for (j = i; j < len; j++)
			{
			if (isdigit(str[j]))
				{
/*				printf("%d ", str[j]);  
*/
				n++;
				}
			else
				break;
			}	 

		lastdigitpos = j - 1;
		m = firstdigitpos;
		
		for (i = n; i > 0; i--)
			{
			z = i-1;
			y = 10;	
			x = pow(y, z);			
			k = (str[m] - '0') * x;
			num = num + k;
			m++;
/*			printf("\nz= %f \n", z);
			printf("y= %f \n", y);
			printf("x= %f \n", x);
			printf("k= %d \n", k);
			printf("num= %d \n", num);
			printf("m= %d \n", m);
*/
			}				
/*
		printf("n= %d \n", n);
		printf("First = %d \n", firstdigitpos);
		printf("Last = %d \n",  lastdigitpos);
		printf("len %d \n", len);
*/
		return num;
		}

char* 	s_itoa(int number, char * string, int base)
		{
		/* assuming the base is 10 i.e. decimal */		
		sprintf(string, "%d", number);	
		return string;
		}
