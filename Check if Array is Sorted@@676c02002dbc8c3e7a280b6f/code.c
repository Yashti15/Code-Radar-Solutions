// Your code here...
#include <stdio.h>
#include <stdbool.h>

void sorted(int arr[],int n){
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
      
        if(arr[i]<=arr[j]){
            int sort=1;
        }
        }
        if(sort==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
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
    
    


    return 0;
}