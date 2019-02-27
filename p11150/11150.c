#include <stdio.h>

int main()
{
    int N, i, j, k, ck, emp, tot;

    while(scanf("%d", &N) != EOF)
    {
        ck = 0;
        tot = N;

        while(N > 2) {
            N = N - 3; ///Three bottles drunk from N bottles

            ck++; ///After drinking three bottles we get 1 free

            ///in hand 2 bottles , borrow one empty from shopkeeper, drink the two and add the empty with three get one free coke and give that empty bottle to the shopkeeper
            printf("N: %d",N);

            if(ck > 0)
                if(ck%3 == 0) {
                    ck++; ///After drinking three extra bottles we another extra
                }
            printf("\tck: %d\n",ck);

            if(N == 2) {
                ck++;
                if(ck%3 == 0)
                    tot++;
                printf("%d\n", ck);
                N = 0;
            }

        }

        if(N == 2)
           tot = 3;

        tot = tot + ck;
        printf("%d\n", tot);
    }
}
