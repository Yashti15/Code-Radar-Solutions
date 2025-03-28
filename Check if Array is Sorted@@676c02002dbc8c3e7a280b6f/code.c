// Your code here...
#include <stdio.h>
#include <stdbool.h>

void sorted(int arr[],int n){
    for(int i=0,j=n-1;i<=j;i++){
        bool sort=false;
        if(arr[i]>=arr[j]){
            sort=false;
        }

    }


    return ;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    sorted(arr,n);
    int sort;
    if(sort==false){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }




    return 0;
}