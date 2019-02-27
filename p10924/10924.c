#include <stdio.h>
#include <string.h>

int isPrime(int num){
    int i;
    for(i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    char ch[20];
    int i, len, k, sum, check;

    while(scanf("%s", ch)!=EOF) {
        sum = 0;
        len = strlen(ch);
        for(i = 0; i < len; i++) {
            if(ch[i] >= 'a' && ch[i] <= 'z') {
                sum += ch[i] - 96;
            } else {
                sum += ch[i] - 38;
            }
        }

        check = isPrime(sum);

        if(check == 1) {
            printf("It is a prime word.\n");
        } else
            printf("It is not a prime word.\n");

    }
}
