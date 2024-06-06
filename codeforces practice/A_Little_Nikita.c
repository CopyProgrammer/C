#include<stdio.h>

int main() {
    int n,m,t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%d %d", &n, &m);
        if(n<m) {
            printf("No\n");
        }
        else if((n-m)%2 != 0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}