// Your code here...
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
            else{
                flag=true;
            }
        }
        if(flag==true){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
    
    
    


    return 0;
}