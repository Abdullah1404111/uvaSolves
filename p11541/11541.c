#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T, i, index = 0, num, j, ck,cas = 1;
    char ch[1000], ch1[1000], c;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%s", ch);

        printf("Case %d: ",cas++);
        for(i = 0; i <= strlen(ch); i++)
        {
            if((ch[i] >= 'A' && ch[i] <= 'Z') || i == strlen(ch)){
                if(index > 0) {
                    ch1[index] = '\0'; /// the last null character for the ch1 use atoi() function to convert a string to int

                    num = atoi(ch1);
                    for(j = 0; j < num; j++)
                        printf("%c", c);
                }
                c = ch[i];

                index = 0;
            } else {
                    ch1[index++] = ch[i];  /// SAVE THE NUMBERS IN AN EMPTY STRING ch1
            }
        }

        printf("\n");
    }
}
