#include<stdio.h>
int perfect(int x,int y){
	if(y==0){
		return 0;
	}
	if(x%y==0){
		return y+perfect(x,y-1);
	}
	else{
		return perfect(x,y-1);
	}
//	return 0;
}
int main(){
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	if(n==perfect(n,n/2)){
		printf("Perfect Number");
	}
	else{
		printf("Not a Perfect Number");
	}
}