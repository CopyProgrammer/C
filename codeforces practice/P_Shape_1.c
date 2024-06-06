#include<stdio.h>

void output(int i) {
    for(int j=i; j>=1; j--) {
        printf("*");
    }
}

int main() {
    int a;
    scanf("%d", &a);
    for(int i=a; i>=1; i--) {
        output(i);
        printf("\n");
    }
    return 0;
}