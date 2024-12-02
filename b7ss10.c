#include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Nhap so dòng và so cot: ");
    scanf("%d%d", &n, &m);

    int arr[n][m];
    printf("Nhap các phan tu:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    for (j = 0; j < m; j++) {
        for (i = 0; i < n - 1; i++) {
            for (k = i + 1; k < n; k++) {
                if (arr[i][j] > arr[k][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    printf("Ma tran sau sap xep tang dan theo dong:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}

