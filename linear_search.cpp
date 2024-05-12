#include<stdio.h>
int main(){
	int Arr[7]={7,4,9,3,4,2,1};
	int B[6];
	int i=0;
	for(int i=0;i<7;i++){
		for(int j=i+1;j<7;j++){
			if(Arr[i]==Arr[j]){
				i++;
			}
			else if(i==1){
				i--;
			}
			else{
				B[i]=Arr[i];	
			}
		}
	}
	for(int k=0;k<6;k++){
		printf("%d ",B[k]);
	}
}