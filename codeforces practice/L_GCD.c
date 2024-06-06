#include<stdio.h>

int main() {
    int A,B,count;
    scanf("%d %d", &A,&B);
    for(int i=1; i<=A && i<=B; i++) {
        if(A%i == 0 && B%i == 0) {
            count = i;
        }
    }
    printf("%d", count);
    return 0;
}