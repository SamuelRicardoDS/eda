
int faz_conta_direito(int parcelas, char op) {
    int primeiroinput;
    int inputs;

    scanf("%i", & primeiroinput);
    for(int i = 1; i < parcelas; i++ ) {
        scanf("%i", &inputs);
        if(op == '+') {
           primeiroinput += inputs;
        } else if(op == '-') {
            primeiroinput -= inputs;
        }
    }
    return primeiroinput;
}