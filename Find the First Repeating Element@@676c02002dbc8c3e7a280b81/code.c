// Your code here...
#include <stdio.h>

void repeat(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);  // Print first repeated number
                return;
            }
        }
    }
    printf("-1\n");  // If no repeated number is found
}

int main() {
    int n;
    scanf("%d", &n);  // Corrected scanf

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected scanf
    }

    repeat(arr, n);  // Function call
    return 0;
}
