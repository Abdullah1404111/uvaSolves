#include<stdio.h>
#include<math.h>
#define M 1000000

int arr[M];

void sieve()
{
    int root, i, j;
    ///memset(arr, true, sizeof(arr));

    for(i = 0; i < M; i++)
        arr[i]=1;

    root = sqrt(M);

    for(i = 2; i <= root; i++) {
        if(arr[i] == 1) {
            for(j = 2; i * j <= M; j++) {
                arr[i * j] = 0;
            }
        }
    }
}
int main()
{
    int N, mi, ma, sum, i = 0, j, num1, num2;
    sieve();
    while(1)
    {
        scanf("%d", &N);
        if(N == 0)
            return 0;

        mi = 2;
        ma = N;

        while(ma + mi != N) {

            while(arr[mi] != 1) {
                mi++;
            }

            for(i = ma; i > mi; i--) {
                if(arr[i] && (mi + i) == N){
                    num1 = mi;
                    num2 = i;
                    break;
                }
            }
            if(num1 + num2 == N)
                break;

            mi++;

        }
        printf("%d = %d + %d\n", N, num1, num2);
    }

    return 0;
}
