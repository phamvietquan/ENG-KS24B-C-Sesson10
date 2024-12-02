#include <stdio.h>

void sortRow(int arr[], int m) {
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int n, m;
    printf("Nhap so dong va so cot: ");
    scanf("%d%d", &n, &m);

    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++) 
        sortRow(arr[i], m);

    printf("Ma ran sau khi sap xep cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

