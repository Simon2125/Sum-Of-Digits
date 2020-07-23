#include<stdio.h>
int Digits(int num);
int main()
{
	int num, sum;
	printf("input number: ");
	scanf("%d",&num);
	sum = Digits(num);
	printf("sum of digits: %d",sum);
	return 0;
}

int Digits(int num)
{
    if(num == 0)
    	return 0;
	return ((num%10) + Digits(num/10));
}
