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
int t;
int pair;
scanf("\n%d",&t);
bool flag=false;
for(int i=0;i<n;i++){
    if(arr[i]==t){
        flag=true;
        pair=i;
        
    }
    
}
if(flag==true){
    printf("%d",pair);
}
else{
    printf("-1");
}

    return 0;
}