#include <stdio.h>

void insertElement(int a[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position for insertion.\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        a[i] = a[i - 1];
    }
    a[position] = element;
    (*n)++;
}

void deleteElement(int a[], int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Invalid position for deletion.\n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main() {
    int n, i, j, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a1[n + 10]; // Allocate extra space for insertions
    printf("Enter %d elements:\n", n);
    for (int k = 0; k < n; k++) {
        scanf("%d", &a1[k]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (0-based index) to insert the element: ");
    scanf("%d", &i);

    insertElement(a1, &n, element, i);

    printf("Array after insertion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    printf("Enter the position (0-based index) to delete an element: ");
    scanf("%d", &j);

    deleteElement(a1, &n, j);

    printf("Array after deletion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    return 0;
}