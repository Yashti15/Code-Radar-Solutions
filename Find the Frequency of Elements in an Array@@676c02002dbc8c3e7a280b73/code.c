#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int count=0;
            if(arr[i]==arr[j]){
                 count++;
               
            }

        }
         printf("%d %d\n",arr[i],count);
    }
    return 0;
}