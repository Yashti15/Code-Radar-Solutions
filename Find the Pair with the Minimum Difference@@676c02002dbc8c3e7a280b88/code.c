#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(){
    int n;
    
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int pair1,pair2;
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<max){
               max=abs(arr[i]-arr[j]);
                pair1=arr[i];
                pair2=arr[j];
            }
        }
    }
    if(pair1>pair2){
        printf("%d %d",pair1,pair2);
    }
    else if(pair2>pair1){
        printf("%d %d",pair2,pair1);
    }
    else{
        printf("-1");
    }




    return 0;
}