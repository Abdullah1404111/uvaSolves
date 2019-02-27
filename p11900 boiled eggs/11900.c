#include <stdio.h>
#define time 12

int main()
{
    int T, n, P, Q, egg[35], i, j, k, w, tot, cas = 1;
    scanf("%d", &T);

    while(T--)
    {
        w = 0;
        tot = 0;
        scanf("%d %d %d", &n, &P, &Q);
        for(i = 0; i < n; i++) {
            scanf("%d", &egg[i]);
        }

        if(P < n)
            for(i = 0; i < P; i++) {
                w += egg[i];
                if(w <= Q)
                    tot++;

            }
        else
            for(i = 0; i < n; i++) {
                w += egg[i];
                if(w <= Q)
                    tot++;
            }

        printf("Case %d: %d\n", cas++, tot);
    }

    return 0;
}
