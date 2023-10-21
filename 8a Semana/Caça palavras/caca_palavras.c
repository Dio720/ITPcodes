#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void imprimePalavra(char *c, int salto, int tam) {
    if (c == NULL) {
        printf("Palavra nao encontrada\n");
        return;
    }
    for (int i = 0; i < tam; i++) {
        printf("%c", *c);
        c += salto;
    }
    printf(", salto:%d\n", salto);
}

char* encontraPalavra(char *grid, int n, int m, char *word, int *salto) {
    int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    char *min_ptr = NULL;

    for (int x = 0; x < n; ++x)
        for (int y = 0; y < m; ++y)
            for (int dir = 0; dir < 8; ++dir){
                int len, xx, yy;
                char *ptr = grid + x * m + y;

                for (len = 0, xx = x, yy = y; word[len] != '\0'; ++len, xx += dx[dir], yy += dy[dir]){
                    char *cur_ptr = grid + xx * m + yy;
                    
                    if (xx < 0 || xx >= n || yy < 0 || yy >= m || tolower(*cur_ptr) != tolower(word[len]))
                        break;
                }
                if (word[len] == '\0')
                    if (min_ptr == NULL || ptr < min_ptr){
                        min_ptr = ptr;
                        *salto = dx[dir] * m + dy[dir];
                    }
            }

    return min_ptr;
}

int main(){
    int n, m, q;

    scanf("%d", &q);

    char words[5][20];

    for (int i = 0; i < q; ++i)
        scanf("%s", words[i]);

    n = 10; m = 10;
    char grid[10][10];

    for (int i = 0; i < n; ++i)
        scanf("%s", grid[i]);

    for (int i = 0; i < q; ++i){
        int salto;
        char *ptr = encontraPalavra((char *)grid, n, m, words[i], &salto);
        imprimePalavra(ptr, salto, strlen(words[i]));
    }
    
    return 0;
}