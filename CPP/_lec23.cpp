#include <iostream>

using namespace std;

/* int binarySearch (int arr[], int n, int k) {
    int start = 0, end = n-1, mid = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (k < arr[mid])
            end = mid - 1;
        else if (k > arr[mid])
            start = mid + 1;
        else if (k == arr[mid])
            return mid;
    }
    return -1;

} */

/* void selectionSort (int arr[], int n) {
// In each iteration swap the first element and the minimum element in the remaining array
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
} */

/* void bubbleSort (int arr[], int n) {
    // repeatedly swap two adj elements if they are in wrong order
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
} */

/* void insertionSort (int arr[], int n) {
    // keep moving the element backwards till it is at its correct position
    for (int i=1; i<n; i++) {
        int currentElement = arr[i];
        int prev = i-1;
        while (currentElement < arr[prev] && prev >= 0) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = currentElement;
    }
} */

/* int* maxTilli (int arr[], int n) {
    int max = arr[0];
    int* maxArr = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++) {
        if (arr[i] > max) {
            maxArr[i] = arr[i];
            max = arr[i];
        }
        else
            maxArr[i] = max;
    }
    return maxArr;
} */

/* void sumOfSubArrays (int arr[], int n) {
    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=i; j<n; j++) {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}
 */

/* int longestArithematicSubArr (int arr [], int n) {
    int maxCount = 1, currentCount = 1;
    int diff = arr[1] - arr[0];
    for (int i=1; i<n-1; i++) {
        if (arr[i+1] - arr[i] == diff) {
            currentCount++;
        } else {
            diff = arr[i+1] - arr[i];
            currentCount = 1;
        }
        maxCount = max(currentCount, maxCount);
    }
    return maxCount + 1;
} */

/* int recordBreakingDays (int arr[], int n) {
    int count = 0, mx = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] > mx && arr[i] > arr[i+1]) 
            count++;
        mx = max(mx, arr[i]);
    }
    return count;
} */

int main () {

    int n;
    cin >> n;
    int arr[n+1];  // n+1 for last ques only
    for(int i=0; i<n; i++)
        cin >> arr[i];
    arr[n] = -1;  // for last question only

    //cout << recordBreakingDays(arr, n) << endl;

    return 0;
}