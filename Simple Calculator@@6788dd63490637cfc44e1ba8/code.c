// Your code here...
#include <stdio.h>
int main(){
    char c;
    int a,b;
    if (c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }




    return 0;
}