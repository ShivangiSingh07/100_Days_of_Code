Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
  #include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;  // Found at index mid
        else if (arr[mid] < target)
            low = mid + 1;  // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1;  // Not found
}

int main() {
    int n, target;

    // Input array size
    scanf("%d", &n);
    int arr[n];

    // Input sorted array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input target element to search
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");

    return 0;
}
