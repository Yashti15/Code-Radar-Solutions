// Your code here...
#include <stdio.h>
void reverse(int arr[],int fel,int lel){
    for(int i=fel,j=lel;i<=j;i++,j--){
        int temp=fel;
        fel=lel;
        lel=temp;
    }
}
int main(){
int n;
scanf("%d\n",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d\n",&arr[i]);
}
int k;

scanf("\n%d",&k);
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}


return 0;
}

