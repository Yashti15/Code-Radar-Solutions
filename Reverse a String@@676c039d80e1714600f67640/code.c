#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",&str);
    int i=0;
    int j = strlen(str)-1;
    while(i<=j){
        int c;
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    printf("%s",str);
}