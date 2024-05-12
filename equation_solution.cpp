#include<stdio.h>
int main(){
	int ones=0,n;
	for(int i=0;;i++){
		scanf("%d",&n);
		if(n==1){
			ones++;
		}
		else if(n==-1){
			break;
		}
	}
	if(ones%2==0){
		printf("%d",1);
	}
	else{
		printf("%d",0);
	}
	return 0;
}