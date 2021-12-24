//WACP to toggle a bit//

#include<stdio.h>
void main()
{
	int num,pos;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("Enter the position of the number\n");
	scanf("%d",&pos);
	num=num ^ (1<<pos);
	printf("Toggled bit is=%d\n",num);

}
