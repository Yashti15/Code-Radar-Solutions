#include <stdio.h>
void frequency(int arr[],int n,int target){
    int found=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        }
    }


    return;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int target;
    scanf("\n%d",&target);
    frequency(arr,n,target);




    return 0;
}