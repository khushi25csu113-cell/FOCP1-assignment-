#include <stdio.h>
int main() {
    int arr[] = {5, 10, 20, 10, 5, 30, 40};
    int len = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    printf("Duplicate elements: ");

    for (int i = 0; i < len; i++) {
        int count = 1;
        if (arr[i] == -1) continue; // Skip already marked duplicates

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as visited
            }
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
