#include <stdio.h>
int main()
{
    int a, b, sum, test, i, c = 1;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d", &a, &b);
        sum = 0;
        for(i = a; i <= b; i++) {
            if(i%2 != 0) {
                sum += i;
            }
        }

        printf("Case %d: %d\n", c++, sum);
    }
}
