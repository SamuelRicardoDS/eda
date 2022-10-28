#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];

    while (scanf("%s", s) > 0)
    {
        if (strcmp(s, "marte") == 0)
        {
            printf("%s", "Leonardo Cicero Marciano\n");
            return 0;
        }
      
    }
    printf("none\n");

    return 0;
}