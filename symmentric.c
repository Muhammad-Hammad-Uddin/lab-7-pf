#include <stdio.h>
main(){
	int a,i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	int arr[n][n];
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
		
			
		}
		for (i=0;i<n;i++){
		  for(j=0;j<n;j++){
		  	printf(" %d ",arr[i][j]);
	}
	printf("\n");
	   }
	if(arr[1][0]==arr[0][1]&&arr[2][0]==arr[0][2]&&arr[2][1]==arr[1][2])
	printf("symmetric");  
	else
	printf("not symmetric");
	}
