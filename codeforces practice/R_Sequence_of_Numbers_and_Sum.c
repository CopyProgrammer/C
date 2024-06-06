#include<stdio.h>

void output(int a, int b) {
    int count = 0;
    if(a>0 && b>0) {
        if(a>b) {
            for(int i=b; i<=a; i++) {
                printf("%d ", i);
                count = count + i;
            }
            printf("sum =%d", count);
            printf("\n");
        }
        else {
            for(int i=a; i<=b; i++) {
                printf("%d ", i);
                count = count + i;
            }
            printf("sum =%d\n", count);
        }
    }
    else {
        return;
    }
}

int main(){
    int a,b;
    do{
        scanf("%d %d", &a, &b);
        output(a,b);
    } while(a>0 && b>0);

    return 0;
}