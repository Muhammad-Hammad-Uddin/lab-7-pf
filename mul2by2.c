#include<stdio.h>
main(){
	int i,j,k,n;
	int a[2][2],b[2][2];
	printf("enter 1st matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		 n=0;
			for(k=0;k<2;k++){
			
			n+=a[i][k]*b[k][j];}
			printf("%d\t",n);
		}
	printf("\n");}
}
