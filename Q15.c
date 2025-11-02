#include <stdio.h>
int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int last = array[n - 1];
  
    for (int i = n - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = last;
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
