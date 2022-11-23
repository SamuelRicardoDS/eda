#include <stdio.h>

int main() {
    int mensagem;
    char *ptrMensagem;
    
    while(scanf("%x", &mensagem) > 0) {
        ptrMensagem = (char *)&mensagem;

        printf("%s", ptrMensagem);
    }
}