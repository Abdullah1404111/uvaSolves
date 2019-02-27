#include <stdio.h>

int main()
{
    int T, N, K, P, F, c = 1;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &N, &K, &P);

        while(P > 0) {
            K++;
            if(K > N){
                K = 1;
            }
            P--;
        }

        printf("Case %d: %d\n", c++, K);
    }
}
