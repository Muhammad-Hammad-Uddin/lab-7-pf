#include<stdio.h>
main(){
	int a,j,i,ele;
	printf("enter size of an array");
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		printf("enter number");
		scanf("%d",&arr[i]);
	}
	int frequency=0;
	for(i=0;i<a;i++){
		ele=arr[i];
		for(j=0;j<a;j++){
			if(ele==arr[j]){
			
			frequency++;}
		}
			printf("Frequency of %d = %d\n",ele,frequency);
	frequency=0;
	}

}
