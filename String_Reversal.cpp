#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    char str1[200],str2[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        fgets(str1,200,stdin);
        fgets(str2,200,stdin);
        if(strlen(str1)==strlen(str2)&&strcmp(str1,str2)==0){
        	printf("Yes");
        }
    }
    return 0;
}
