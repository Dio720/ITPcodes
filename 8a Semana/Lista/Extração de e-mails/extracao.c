#include <stdio.h>
#include <string.h>

int obtemIndiceArroba(char email[50]) {
    int i = 0, indiceArroba = -1;
    while (email[i] != '\0') {
        if (email[i] == '@') {
            indiceArroba = i;
            break;
        }
        i++;
    }
    return indiceArroba;
}

void obtemNome(char email[50], char nome[50], int indiceArroba) {
    int i = indiceArroba + 1, j = 0;
    while (email[i] != '.') {
        nome[j] = email[i];
        i++;
        j++;
    }
    nome[j] = '\0';
}

int main() {
    char emails[10][50], entrada[50];
    int qntdEmails = 0, localArroba;

    do {
        scanf("%s", entrada);
        if (strcmp(entrada, "FIM") != 0) {
            strcpy(emails[qntdEmails], entrada);
            qntdEmails++;
        }
    } while (strcmp(entrada, "FIM") != 0);

    for (int i = 0; i < qntdEmails; i++) {
        localArroba = obtemIndiceArroba(emails[i]);
        if (localArroba != -1) {
            char nome[50];
            obtemNome(emails[i], nome, localArroba);
            printf("%s\n", nome);
        }
    }

    return 0;
}

