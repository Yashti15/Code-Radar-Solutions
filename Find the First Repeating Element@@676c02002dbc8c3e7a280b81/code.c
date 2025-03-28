// Your code here...
void repeat(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                int repeated=arr[i];
                printf("%d",repeated);
                break;
            }
            else{
                printf("-1");
            }
        }



    return ;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
        }
        repeat(arr,n);









    return 0;
}