#include<stdio.h>
#include<math.h>
int disarium(int x,int y){
	if(x==0){
		return 0;
	}
	return pow(x%10,y)+disarium(x/10,y-1);
}
int main(){
	int n,test,digits=0;
	scanf("%d",&n);
	test=n;
	while(test!=0){
		digits++;
		test/=10;
	}
	if(n==disarium(n,digits)){
		printf("Disarium Number");
	}
	else{
		printf("Not Disarium Number");
	}
}