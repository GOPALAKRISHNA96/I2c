//WACP to print given string is symmetric or not//

#include<stdio.h>

#include<stdlib.h>

void main()

{
	char str[30];
	
	int i,s1=0,s2=0,s3=0;
	
	printf("Enter a string\n");
	
	scanf("%s",str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		
		if(str[i]== '{')
		{
			s1++;
		}
		if(str[i]=='}')
		{
			s1--;

		}
		if(str[i]=='(')
		{

			s2++;
			
		}
		if(str[i]==')')
		{
			s2--;
		}
		if(str[i]== '[')
		{
			s3++;
		}
		if(str[i]==']')
		{
			s3--;
		}
	
		if(s1<0 || s2<0 || s3<0 )
			{
				printf("The given string is not  a symmetric string\n");
				exit(0);
    		}
	}		
		if( s1 || s2 || s3)
		{
			printf("THe given string is Not a symmetric string\n");
		}
		else
		{
			printf("The Given strring is a Symmetric string\n");
			
		}
		
	
}
