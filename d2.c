#include <stdio.h>
#include <string.h>

int main() {
    char s[4];
    int triagem = 0;
    int print = 0;
    int count = 0;

    while (scanf("%s", s) > 0) {
            if(strcmp(s, "sim") == 0) {
                triagem ++;
            } 
            count ++;
            if(count == 10) {
                if(triagem >= 2) {
                    print ++;
                }
            count = 0;
            triagem = 0;
            }
        
    }
    printf("%i\n", print);

    return 0;
}