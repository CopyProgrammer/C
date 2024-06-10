#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i=1; i<=5; i++) {
        if (i<N) {
            printf("%d\n", i);
        } else if (i==N) {
            printf("%d", i);
        }
    } return 0;
}