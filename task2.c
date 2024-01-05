#include<stdio.h>
main(){
	int d,n,i,arr[i]; 
	printf("enter an integer (d)");
	scanf("%d",&d);
	printf("enter size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number %d ",i+1);
	    scanf("%d",&arr[i]);
	}
	for(i=d;i<n;i++){
	
	printf("%d ",arr[i]);
	}
	for(i=0;i<n-d;i++){
	printf("%d ",arr[i]);
	}
}
