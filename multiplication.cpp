#include<stdio.h>
int main(){
	int r1,r2,c1,c2;
	printf("Enter First Matrix Row and Column: ");
	scanf("%d %d",&r1,&c1);
	printf("Enter Second Matrix Row and Column :");
	scanf("%d %d",&r2,&c2);
	if(r1==c2){
		int A[r1][c1],B[r2][c2],C[r2][c1];
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("Enter Element of %dth Row %dth Column : ",i+1,j+1);
				scanf("%d",&A[i][j]);
			}
		}
		for(int i=0;i<r2;i++){
			for(int j=0;j<c2;j++){
				printf("Enter Element of %dth Row %dth Column : ",i+1,j+1);
				scanf("%d",&B[i][j]);
			}
		}
		for(int i=0;i<r2;i++){
			for(int j=0;j<c1;j++){
				C[i][j]=0;
			}
		}
		for(int i=0;i<r2;i++){
			for(int j=0;j<c1;j++){
				C[i][j]=+A[i][j]*B[j][i];
				printf("%d ",C[i][j]);
			}
			printf("\n");
		}
	}
}