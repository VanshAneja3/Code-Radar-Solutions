#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);


    if(a+b>c && a+c>b && c+b>a && a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if(a+b>c && a+c>b && c+b>a && a!=b && b!=c && c!=a){
        printf("Scalene");
    }
    else if(a+b>c && a+c>b && c+b>a && (a == b || b == c || a == c)){
        printf("Isoceles");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}