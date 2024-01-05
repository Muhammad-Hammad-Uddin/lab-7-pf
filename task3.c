#include<stdio.h>
main(){
	int sum=0,d,n;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0){
		d=n%10;
	    sum+=d;
	    n=n/10;
	}
	printf("the sum is %d",sum);
	
	
}
