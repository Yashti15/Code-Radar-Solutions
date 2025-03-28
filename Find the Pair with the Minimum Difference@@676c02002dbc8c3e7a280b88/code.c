#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    int arr[n];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j] || arr[j]-arr[i]<max){
                printf("%d %d",&arr[i],arr[j]);
            }
        }
    }




    return 0;
}