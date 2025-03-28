#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int t;
    int pair1;
    int pair2;
    scanf("\n%d",&t);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==t){
                pair1=arr[i];
                pair2=arr[j];

                
            }
           
        }
    }
    printf("%d %d\n",pair1,pair2);
   





    return 0;
}