#include<stdio.h>
main(){
	int i,j,n,m,total=0,bill;
	printf("enter no of branches");
	scanf("%d",&n);
	
	printf("enter no of mobile phones ");
	scanf("%d",&m);
	int arr[n][m];
	for(i=0;i<n;i++){
		printf("Enter bill amounts for mobile phones in branch %d:\n", i + 1);
        for (j=0;j<m;j++) {	
		
			 printf("Enter bill for mobile phone %d: ",j+1);
            scanf("%d", &arr[i][j]);
			
		}
	}
	int maxbillbranchid = -1, maxbillmobileid = -1;
	int maxbill=-1000;
	for(i=0;i<n;i++){
		
		 
		bill=0;
		for(j=0;j<m;j++){
			bill+=arr[i][j];
			total+=arr[i][j];
			if (arr[i][j] > maxbill) {
                maxbill = arr[i][j];
                maxbillbranchid = i;
                maxbillmobileid = j;
            }
			
            }
            printf("the bill for  %d branch is:%d\n",i+1,bill);
		}	
		printf("the total bill is %d\n",total);
		printf("the max bill arrived in branch %d\n", maxbillbranchid+1);
		printf("branch %d and mobile phoene id %d where bill is highest",maxbillbranchid+1,maxbillmobileid+1);
	
			
		}
