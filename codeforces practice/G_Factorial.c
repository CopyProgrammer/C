#include<stdio.h>

int main() {
    int t,n,fact=1;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        if(n==0){
            fact = fact*n;
        } else{
            for(int j=1; j<=n; j++) {
                fact = fact * j;
            }
        }
        printf("%d", fact);
    }
    return 0;
}