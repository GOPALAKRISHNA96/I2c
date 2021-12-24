//WACP To SET A Bit//

#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter a position to set a bit\n");
	scanf("%d",&pos);
	num=num | (1<<pos);
	printf("\nSET Number is =%d\n",num);

}
