#include <stdio.h>

int main() {
    long int a, b;
    int c, h, s;
    while(scanf("%ld %ld", &a, &b)) {
        h = 0;
        c = 0;
        if(a == 0 && b == 0)
            break;

        while(a > 0 || b > 0) {
            s = a % 10 + b % 10 + h;
            a = a / 10;
            b = b / 10;
            if(s >= 10) {
                h = 1;
                c++;
            } else
                h = 0;
        }
        if(c > 1) {
            printf("%d carry operations.\n", c);
        } else if(c == 1) {
            printf("%d carry operation.\n", c);
        } else {
            printf("No carry operation.\n");
        }
    }
}
