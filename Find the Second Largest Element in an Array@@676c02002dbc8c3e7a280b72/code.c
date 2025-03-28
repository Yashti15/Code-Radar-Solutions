// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max=INT_MIN;
    int smax=INT_MAX;
    for(int i=0;i<n;i++){

        if(arr[i]>max && arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("%d",smax);

    






return 0;
}