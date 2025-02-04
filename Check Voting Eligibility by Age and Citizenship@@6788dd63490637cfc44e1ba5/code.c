#include <stdio.h>
int main(){
    int a,c;
    scanf("%d %d",&a,&c);
    if(a>=18 && c==1 ){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }



    return 0;
}