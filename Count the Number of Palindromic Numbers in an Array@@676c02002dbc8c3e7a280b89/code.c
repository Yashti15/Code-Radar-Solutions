// Your code here...
#include <stdio.h>
int palindrome(int num){
    int original,reversed=0,remainder=0;
    original=num;
    while(num>0){
        
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    return original==reversed;
}
int count(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        
        if(palindrome(arr[i])){
            count++;
        }
        
    }
    return count;
}
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d",count(arr,n));
    return 0;
}