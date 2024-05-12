#include<stdio.h>
#include<math.h>
int gcd(int* arr,int a,int b,int target){
	if(a>b){
		return 0;
	}
	int c=(a+b)/2;
	if(target==arr[c]){
		return c;
	}
	if(target>arr[c]){
		return gcd(arr,c+1,b,target);
	}
	else{
		return gcd(arr,a,c,target);
	}
}
int main(){
	int arr[5]={11,25,32,43,56};
	int n,x;
	scanf("%d",&n);
	x=gcd(arr,0,5,n);
	x?printf("Element is at index %d",x):printf("Element is not Present");
}