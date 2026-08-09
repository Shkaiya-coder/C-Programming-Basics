#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of each element:\n");

    for (i = 0; i < n; i++) {
        count = 1;

        if (arr[i] == -1) {
            continue;
        }

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}
