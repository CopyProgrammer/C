#include<stdio.h>

int main() {
    int n,x=0,y=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d", &x);
        if(x>y) {
            y=x;
        } else{
            continue;
        }
    }
    printf("%d", y);
    return 0;
}