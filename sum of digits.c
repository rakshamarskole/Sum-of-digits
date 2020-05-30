#include<stdio.h>
 int sumofdigits(int N);
 int main()
 {
 	int n,sum;
 	printf("Enter any number:");
 	scanf("%d",&n);
 	sum=sumofdigits(n);
 	printf("You have entered no. :%d\n",n);
 	printf("Sum of digits is :%d",sum);
 	return 0;
 	
 }
 
 int sumofdigits(int N)
 {
 	if(N==0)
 	  return 0;
 	else
 	  return (N%10)+(sumofdigits(N/10));
 }
