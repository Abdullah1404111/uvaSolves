#include <stdio.h>

int main()
{
    int N, speed[1000], S, i, T, temp, j, cas = 1;
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        S = 1;
        for(i = 0; i < N; i++) {
            scanf("%d", &speed[i]);
        }

        for(i = 0; i < N; i++) {
            if(speed[i] > S)
                S = speed[i];
        }

        printf("Case %d: %d\n", cas++, S);
    }
}
