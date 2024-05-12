#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,temp,swaps=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int k=0;k<n;k++){
        for(int l=0;l<n-1;l++){
             if(arr[l]>arr[l+1]){
            temp=arr[l];
            arr[l]=arr[l+1];
            arr[l+1]=temp;
            swaps++;
        }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n%d",swaps);
    return 0;
}
