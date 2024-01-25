#include <iostream>

void countOccurrencesBruteForce(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        // Skip if this element is already counted
        if (arr[i] == -1) {
            continue;
        }

        int count = 1;

        // Count occurrences by comparing with other elements
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
                // Mark the counted element to avoid duplicates
                arr[j] = -1;
            }
        }

        std::cout << "Element " << arr[i] << " occurs " << count << " times." << std::endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3, 4, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    countOccurrencesBruteForce(arr, n);

    return 0;
}
