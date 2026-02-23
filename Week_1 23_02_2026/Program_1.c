#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = 2147483647, second = 2147483647;

    for(i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && arr[i] < second) {
            second = arr[i];
        }
    }

    printf("Second smallest element = %d", second);
    return 0;
}
