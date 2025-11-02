#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 1; // 0 = front, 1 = middle, 2 = end

    printf("Before deletion:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    if (size == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int index;
    if (pos == 0)
        index = 0;
    else if (pos == 1)
        index = size / 2;
    else
        index = size - 1;

    // Shift elements left to delete
    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;

    printf("After deletion:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
