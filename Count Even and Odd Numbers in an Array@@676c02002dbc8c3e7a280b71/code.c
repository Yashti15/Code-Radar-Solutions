// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
    }
    int seven=0,int sodd=0;
    for(int i=0;i<n;i++){
        if(arr[i]52==0){
            seven+=arr[i];
        }
        else{
            sodd+=arr[i];
        }
    }
    printf("%d %d",seven,sodd);





    return 0;
}