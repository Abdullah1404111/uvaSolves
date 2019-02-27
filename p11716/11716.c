#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char ch[10000], dum, ch1[1000][1000];
    int T, i, j, k, l, n, val;

    scanf("%d%c", &T, &dum);

    while(T--)
    {
        scanf("%[^\n]%*c", ch);
        l = strlen(ch);
        n = floor(sqrt(l));
        k = 0;
        if(n * n == l) {
            for(i = 0; i < n; i++) {
                for(j = 0; j < n; j++){
                    ch1[i][j] = ch[k++];
                }
            }

            for(i = 0; i < n; i++) {
                for(j = 0; j < n; j++){
                    printf("%c", ch1[j][i]);
                }
            }
            printf("\n");
        } else {
            printf("INVALID\n");
        }
    }
}
