main()
{
	int mat1[10][10], mat2[10][10], i,j,n;
	int sum1=0 , sum2=0 , sum3=0 , sum4=0;
	int sub1=0 , sub2=0 , sub3=0 , sub4=0;
	printf("Enter the number of the row and columns of the Matrix:");
	scanf("%d",&n);
	
//	For 1st matrix value initialization
	printf("Enter element of the matrix-1st:\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("Enter the element:[%d] [%d]\t",i,j);
			scanf("%d",&mat1[i][j]);
			}
	}	
	
	
//	For 2nd matrix value initialization
	printf("Enter element of the matrix-2nd:\n\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("Enter the element:[%d] [%d]\t",i,j);
			scanf("%d",&mat2[i][j]);
			}
	}
	
//Print matrix
printf("Matrix 1st\n");
 for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			
			printf("%d\t",mat1[i][j]);
			}
			printf("\n");
	}

printf("Matrix 2nd\n");
 for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			
			printf("%d\t",mat2[i][j]);
			}
			printf("\n");
	}

//Addition of the digonal Matrix
printf("\n\n=======================Addition of the Digonal Matrix=======================\n");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i==j){
			sum1 = sum1+mat1[i][j];
			
			sum2 = sum2+mat2[i][j];	
		}
		if(i+j==n-1){
			
			sum3 = sum3+mat1[i][j];
			
			sum4 = sum4+mat2[i][j];	
		}
		
	}
		
}
		printf("\n\n\nRight Digonal Matrix\n ");
		printf("\n Matrix 1st :%d ",sum1);
		printf("\n Matrix 2nd :%d ",sum2);
		printf("\n\nLeft Dional Matrix:\n  ");
		printf("\n Matrix 1st :%d ",sum3);
		printf("\n Matrix 2nd :%d ",sum4);
printf("=========================================================================");	

//Subtraction of the digonal matrix

printf("\n\n=======================Subtraction of the Digonal Matrix=======================\n");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i==j){
			sub1 = sub1-mat1[i][j];
			
			sub2 = sub2-mat2[i][j];	
		}
		if(i+j==n-1){
			
			sub3 = sub3-mat1[i][j];
			
			sub4 = sub4-mat2[i][j];	
		}
		
	}
		
}

	printf("\n\n\nRight Digonal Matrix\n ");
		printf("\n Matrix 1st :%d ",sub1);
		printf("\n Matrix 2nd :%d ",sub2);
		printf("\n\nLeft Dional Matrix:\n  ");
		printf("\n Matrix 1st :%d ",sub3);
		printf("\n Matrix 2nd :%d ",sub4);
printf("=========================================================================");	

getch();
}

