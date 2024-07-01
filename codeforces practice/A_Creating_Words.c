#include<stdio.h>

int main() {
    char a[4],b[4];
    int n;
    scanf("%d", &n);
    // scanf("%s", array);
    // printf("%c", array[0]);
    // char ch = array[0];
    // array[0] = array[4];
    // array[4] = ch;
    // printf("%c%c%c%c%c%c%c", array[0],array[1],array[2],array[3],array[4],array[5],array[6]);

    while(n--) {
        scanf("%s %s", a,b);
        char c = a[0];
        a[0] = b[0];
        b[0] = c;
        printf("%s %s\n", a,b);
    }
    return 0;
}