#include <stdio.h>
int main()
{
    int n, k, c, t;
    while(scanf("%d", &n) != EOF)
    {
        scanf("%d", &k);
        c = 0;
        t = n;
        while(t >= k) {
            t = t - k;
            t++;
            c++;
        }
        n = n + c;

        printf("%d\n", n);

    }
}
