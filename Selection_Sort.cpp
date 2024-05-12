#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		int min=arr[i];
		int index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				index=j;
			}
		}
		int c=arr[i];
		arr[i]=min;
		arr[index]=c;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}