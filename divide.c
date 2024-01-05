#include<stdio.h>
main(){
	int a,b,i=0;
	printf("enter divident");
	scanf("%d",&a);
	printf("enter divisor");
	scanf("%d",&b);
	while(a>=b){
		a=a-b;
		i++;
	}
	printf("quotient =%d\n",i);
	printf("remainder= %d\n",a);
}
