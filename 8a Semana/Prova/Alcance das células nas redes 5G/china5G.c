#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index){
    int count = 0;
    int left = 0, right = n - 1;
    int closest = -1;
    
    while (left <= right){
        int mid = (left + right) / 2;

        if (closest == -1 || abs(cells[mid] - user) < abs(cells[closest] - user))
            closest = mid;
        if (cells[mid] < user)
            left = mid + 1;
        else
            right = mid - 1; 
    }

    *left_index = *right_index = closest;
    
    while (*left_index >= 0 && abs(cells[*left_index] - user) <= distance){
        count++;
        (*left_index)--;
    }
    
    for (int i = closest + 1; i < n && abs(cells[i] - user) <= distance; i++){
        count++;
        *right_index = i;
    }

    return count;
}

int main(){
    int num_cells, cells_range, user_pos;
    int left_index, right_index;
    
    scanf("%d %d %d", &num_cells, &cells_range, &user_pos);

    int *cells = (int*) malloc(num_cells * sizeof(int));
    if (cells == NULL){
        printf("Erro em alocar memória");
        return 1;
    }

    for (int i = 0; i < num_cells; i++) 
        scanf("%d", &cells[i]);

    int count = get_range(num_cells, cells, cells_range, user_pos, &left_index, &right_index);

    if (count > 0){
        for (int i = left_index + 1; i <= right_index; i++)
            printf("%d ", cells[i]);
            
        printf("\n");
    } else 
        printf("USUARIO DESCONECTADO\n");

    free(cells);
    return 0;
}
