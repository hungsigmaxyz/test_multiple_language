
void hello_world():
    printf("hello world")


void add_two_number(int a, int b):
    return a + b


void bubble_sort(int arr[], int n) {
    int i, j;
    int temp;
    for (i = 0; i < n-1; i++) {
        // Track if a swap has occurred
        int swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        // If no elements were swapped, the array is already sorted
        if (swapped == 0)
            break;
    }
}
