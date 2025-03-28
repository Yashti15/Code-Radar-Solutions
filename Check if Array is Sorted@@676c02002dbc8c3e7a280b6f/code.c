// Your code here...
#include <stdio.h>
#include <stdbool.h>

void sorted(int arr[],int n){
   
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i]){
           int sort=1;
        }
        
    }
     return sort;
    
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
    
    


    return 0;
}