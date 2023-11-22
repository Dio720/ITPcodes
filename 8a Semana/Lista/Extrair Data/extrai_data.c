#include <stdio.h>

void formataData(char data[], char entrada[]) {
    int i = 0;
    while (entrada[i] != '\0') {
        if (entrada[i] == '-' || entrada[i] == '/')
            data[i] = '/';
        else
            data[i] = entrada[i];
        i++;
    }
    data[i] = '\0';
}

int validaData(char data[]) {
    int dia, mes, ano;
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1)
        return 0;
    else
        return 1;
}

int main() {
    char entrada[255], data[11];

    scanf("%s", entrada);

    formataData(data, entrada);

    if (validaData(data) == 1)
        printf("%s\n", data);
    else
        printf("INVALIDO!\n");

    return 0;
}