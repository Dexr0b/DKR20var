#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double find_min(double *arr, int size);

int main() {
    double arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

    double min = find_min(arr, size);
    if (min == 0) {
        printf("There are no negative numbers in the array.\n");
    } else {
        printf("The minimum negative value is %lf.\n", min);
    }

    return 0;
}
double find_min(double *arr, int size) {
    double min = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 && (min == 0 || fabs(arr[i]) < fabs(min))) {
            min = arr[i];
        }
    }
    return min;
}
