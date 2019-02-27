#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];
    int c = 1;
    while(scanf("%s", ch)) {
        if(strcmp(ch,"*") == 0)
            break;
        else if(strcmp(ch,"Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n", c++);
        else
            printf("Case %d: Hajj-e-Asghar\n", c++);
    }
}
