/* string to integer
 Implement atoi which converts a string to an integer.

The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.

Note:

Only the space character ' ' is considered as whitespace character.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. If the numerical value is out of the range of representable values, INT_MAX (231 − 1) or INT_MIN (−231) is returned.*/


#include<stdio.h>
#define max 2147483647 
#define min -2147483648

int atoi(char *str)
{  
	double n=0,res;
	int i,flag=0,neg=0;

    

	for (i=0;str[i]!='\0';i++)
	{   
		if (str[i]==32)
			continue;
    	else if (str[i]=='-')
    		neg=1;
        else if (str[i]>=48&&str[i]<=57)
			n=n*10 + (str[i]-48);
		else
		   {flag=1;
		    break;} 

	}
	if (neg=1)
		n=-n;

	if (flag==1)
		res=0;
	else if (n<min)
		res=min;
	else if (n>max)
		res=max;
	else
		res=n;

	return res;

}


void main()
{
	char s[40];
	
	printf("\n Enter the character string  ");
	scanf("%s",s);
    printf("\nThe converted output is %d",atoi(s));
}
