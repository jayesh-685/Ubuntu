#include "bits/stdc++.h"
// it includes every standard library

using namespace std;

/* int firstRepeatingElement (int arr[], int n) {
    const int N = 1e6 + 2;
    int indexArr[N];
    for (int i=0; i<N; i++)
        indexArr[i] = -1;
    int minIndex = INT_MAX;
    for (int i=0; i<n; i++) {
        if (indexArr[arr[i]] != -1)
            minIndex = min(minIndex, indexArr[arr[i]]);
        else
            indexArr[arr[i]] = i;
    }
    if (minIndex == INT_MAX)
        return -1;
    return minIndex;
} */

/* void subArrWithGivenSum (int arr[], int n, int sum) {
    // array need not be sorted
    int sp = 0, ep = 0;
    int currentSum = 0;
    while (ep<n && currentSum < sum) {
        currentSum += arr[ep];
        ep++;
    }
    if (currentSum == sum) {
        cout << sp << " " << --ep << endl;
        return;
    }
    while (ep < n) {
        while (currentSum > sum) {
            currentSum -= arr[sp];
            sp++;
        }
        if (currentSum == sum) {
            cout << sp << " " << --ep << endl;
            return;
        }
        while (ep<n && currentSum < sum) {
            currentSum += arr[ep];
            ep++;
        }
    }
} */

/* int smallestMissingPosNum (int arr [], int n) {
    const int N = 1e6 + 1;
    int pArr[N];  // check array
    for (int i=0; i<N; i++) 
        pArr[i] = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] >= 0)
            pArr[arr[i]] = 1;
        else    
            continue;
    }
    for (int i=1; i<N; i++) {   // we care about +ve no only
        if (pArr[i] == -1)
            return i;
    }
    return -1;
} */

int main () {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    //subArrWithGivenSum(arr, n, sum);
    //cout << smallestMissingPosNum(arr, n) << endl;

    return 0;
}