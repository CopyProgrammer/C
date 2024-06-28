#include<stdio.h>

int main() {
    int N,i=2;
    scanf("%d", &N);
    if(N==2) {
        printf("2");
    } else {
        while(i<=N) {
            if(i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%11==0 || i%13==0 || i%17==0 || i%19==0 || i%23==0 || i%29==0 || i%31==0) {
                continue;
            } else{
                printf("%d", i);
            }
            i++;
        }
    }
}