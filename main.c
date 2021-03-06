#include <stdio.h>

struct pair {
    int min;
    int max;
};

struct pair min_max(int arr[], int size) {
    struct pair minmax;
    int i;
    if (size == 1) {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (i = 2; i < size; i ++) {
        if (arr[i] > minmax.max) {
            minmax.max = arr[i];
        }
        if (arr[i] < minmax.min) {
            minmax.min = arr[i];
        }
    }
    return minmax;

}

int main() {
    int size, arr[100], i;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    struct pair minmax = min_max(arr, size);
    printf("Maximum Element = %d\n", minmax.max);
    printf("Minimum Element = %d\n", minmax.min);
    return 0;
}
