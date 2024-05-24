#include<stdio.h>

void output(int i, int count) {
    int m = i - count;
    int l = (2*(m-1))+1;
    while(l>0) {
        printf("*");
        --l;
    }
    printf("\n");
}
int main() {
    int x, count=0;
    scanf("%d", &x);

    for(int k=1; k<=x; k++) {
        for(int i=k; i<=x; i++) {
            if(i<x) {
                printf(" ");
                count += 1;
            } else {
                output(i, count);
                count = 0;
            }
        }
    }
    return 0;
}