// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int leader;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[i+1]){
            leader=arr[i];

        }
        }
    }
    printf("%d",leader);








    return 0;
}