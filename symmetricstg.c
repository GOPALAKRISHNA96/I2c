#include<stdio.h>

#include<stdlib.h>

void main()
{
	char str[50];

	int i, s1=0, s2=0, s3=0;

	puts("enter the string");

	scanf("%s",str);

	for(i=0; str[i] != '\0';i++)
	{
		if(str[i] == '(')

			s1++;

		if(str[i] == ')')

			s1--;

		if(str[i] == '{')

			s2++;

		if(str[i] == '}')

			s2--;

		if(str[i] == '[')

			s3++;

		if(str[i] == ']')

			s3--;
		if(s1 <0 || s2 <0 || s3 <0)
		{
			printf("the given string is not a symmentric\n");

			exit(0);
		}
	}
	if(s1 || s2 || s3)

		printf("the given string is not a symmentric\n");
	else
		printf("the given string is a symmentric\n");
}
