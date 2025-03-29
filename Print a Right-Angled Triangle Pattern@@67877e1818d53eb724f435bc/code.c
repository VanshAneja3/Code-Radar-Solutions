#include <stdio.h>

int main(){
    int N,i,j;
    scanf("%d",&N);

    for(i=N; i>=1; i--){
        for(j>=1; j<=i; j++){
            print("* ");
        }
        print("\n");
    }
    return 0;}