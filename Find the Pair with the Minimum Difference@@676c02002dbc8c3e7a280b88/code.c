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
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<max){
               max=abs(arr[i]-arr[j]);
               int pair1=arr[i];
               int pair2=arr[j];
            }
        }
    }
    printf("%d %d",pair1,pair2);




    return 0;
}