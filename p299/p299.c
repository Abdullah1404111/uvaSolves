#include <stdio.h>
int main()
{
    int t, L, S, arr[100], i, j, temp, c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &L);
        c = 0;
        for(i = 0; i < L; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(j = 0; j < L - 1; j++) {
            for(i = j + 1; i < L; i++) {
                if(arr[j] > arr[i]) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    c++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", c);
    }

    return 0;
}
