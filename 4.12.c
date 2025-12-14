#include <stdio.h>
#define A_ROWS 2
#define B_ROWS 2
#define BT_ROWS 3
#define BT_COLS 2
#define C_ROWS 2
#define C_COLS 2
#define MAX_SIZE 3

void print_matrix(int rows, int cols, int matrix[][MAX_SIZE]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[A_ROWS][MAX_SIZE];
    int B[B_ROWS][MAX_SIZE];
    int BT[BT_ROWS][MAX_SIZE];
    int C[C_ROWS][MAX_SIZE];
    int i, j, k;

    printf("Enter elements for Matrix A (2x3): \n");
    for(i = 0; i < A_ROWS; i++){
        for(j = 0; j < MAX_SIZE; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (2x3): \n");
    for(i = 0; i < B_ROWS; i++){
        for(j = 0; j < MAX_SIZE; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    for(i = 0; i < B_ROWS; i++){
        for(j = 0; j < MAX_SIZE; j++){
            BT[j][i] = B[i][j];
        }
    }

    printf("\nResult Matrix C (A x BT, 2x2): \n");
    for(i = 0; i < C_ROWS; i++){
        for(j = 0; j < B_ROWS; j++){
            C[i][j] = 0;
            for(k = 0; k < MAX_SIZE; k++){
                C[i][j] += A[i][k] * BT[k][j];
            }
        }
    }

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("Matrix A (2x3):\n");
    print_matrix(A_ROWS, MAX_SIZE, A);

    printf("\nMatrix B (2x3):\n");
    print_matrix(B_ROWS, MAX_SIZE, B);

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix(BT_ROWS, BT_COLS, BT);

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix(C_ROWS, C_COLS, C);

    return 0;

}
