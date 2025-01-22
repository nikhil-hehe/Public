#include <stdio.h>
#include <math.h>
int armstrong(int);
int armstrong(int num){
	int a,i,rem,count,sum;
	count=0;
	a=num;
	
	while (a!=0){
		a=a/10;
		count++;
	}
	a=num;
	while(a!=0){
		rem=a%10;
		sum=sum+pow(rem,count);
		a=a/10;
	}
	
	if (sum==num){
		printf("armstrong no.");
	}
	
	else{
		printf("not armstrong no.");
	}
	return 0;
}
