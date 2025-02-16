#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);


    if(a==b && b==c && c==a){
        printf("Equilareral");
    }
    else if(a+b>c && a+c>b && c+b>a && a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    else{
        printf("Isoceles");
    }
    return 0;
}