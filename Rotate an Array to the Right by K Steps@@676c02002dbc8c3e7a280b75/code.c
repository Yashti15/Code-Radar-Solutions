// Your code here...
#include <stdio.h>
void reverse(int arr[],int n,int fel,int lel){
    for(int i=fel,j=lel;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
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
int k;
scanf("\n%d",&k);
int k=k%2;

reverse(arr,n,0,n-1);


reverse(arr,n,0,k-1);


reverse(arr,n,k,n-1);




return 0;
}

