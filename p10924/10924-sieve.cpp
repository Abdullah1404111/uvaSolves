#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

using namespace std;

int isPrime(int num){
    bool prime[num+1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p <= num; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p*2; i <= num; i += p)
                prime[i] = false;
        }
    }

    return prime[num];
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
