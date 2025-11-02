#include <stdio.h>

int main() {
    int arr[30] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 0;       // 0 = front, 1 = middle, 2 = end
    int num = 99;
    printf("Before insertion:\n");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    printf("\n");}

    if (pos == 0) { // front
        for (int i = size; i > 0; i--)
          {  arr[i] = arr[i - 1];
        arr[0] = num;}
    } else if (pos == 1) { // middle
        int mid = size / 2;
        for (int i = size; i > mid; i--)
          { arr[i] = arr[i - 1];
        arr[mid] = num;}
    } else { // end
        arr[size] = num;
    }
    size++;
    printf("After insertion:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
