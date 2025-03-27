// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
    }
    int seven=0,sodd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            seven++;
        }
        else{
            sodd++;
        }
    }
    printf("%d %d",seven,sodd);





    return 0;
}