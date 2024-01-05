#include<stdio.h>
main(){
	int a,i,temp,j;
	printf("enter size of an array");
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		printf("enter [%d]",i+1);
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Array in ascending order \n");
	for(i=0;i<a;i++){
		printf(" %d ",arr[i]);
	}
}
