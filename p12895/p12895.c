#include <stdio.h>
#include <math.h>

int main()
{
    long long int N, sum, num, rem;
    int T, digits, i, d;
    double res;
    scanf("%d", &T);

    while(T--)
    {
        sum = 0;
        scanf("%lld", &N);
        num = N;
        digits = log10(N) + 1;
        d = digits;
        while(num > 0) {
            rem = num % 10;
            num = num / 10;
            res = pow(rem, digits);
            sum += (int)res;
        }

        if(sum == N){
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }

    return 0;
}
