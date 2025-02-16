#include <stdio.h>

int main(){
    char a;
    scanf("%d",&a);

    if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    else{
        printf("Uppercase");
    }
    return 0;
}