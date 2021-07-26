#include "bits/stdc++.h"
using namespace std;

int fibonaci (int n) {
    if (n == 0 || n == 1)
        return n; 
    return fibonaci(n-1) + fibonaci(n-2);
}

int sum (int n) {
    // return sum till n
    if (n == 0)
        return 0;
    return n + sum(n-1);
}

int power (int a, int n) {
    if (n == 0)
        return 1;
    return a*power(a, n-1);
}

int factorial (int n) {
    if (n == 0)
        return 1;
    return n*factorial(n-1);
}

bool checkSorted (int arr[], int n) {
    // check if the array is sorted using recursion (both increasing and strictly increasing)
    if (n == 1)
        return true;
    return (arr[1] >= arr[0] && checkSorted(arr+1, n-1));
}

void printNoDec (int n) {
    if (n == 0)
        return;
    cout << n << " ";
    printNoDec(n-1);
}

// my approach
/* void printNoInc (int i, int n) {
    if (i > n)
        return;
    cout << i << " ";
    printNoInc(++i, n);
} */

// better approach
void printNoInc (int n) {
    if (n == 0)
        return;
    printNoInc(n-1);
    cout << n << " ";

    // here we will keep on calling till we reach 1 and then start printing unlike prev function where we printed first and then called next function
}

int firstOccurance (int arr[], int n, int k, int i) {
    // find the first occurance of an element in an array
    if (i == n) 
        return -1;
    if (arr[i] == k)
        return i;
    return firstOccurance(arr, n, k, i+1);
}

/* int lastOccurance (int arr[], int n, int k, int i) {
    // basically we go to the end of the array using recusrsion and then keep on returning -1 till key is not found and when key is found we keep on returning index using an if statement
    if (i == n)
        return -1;
    int answer = lastOccurance(arr, n, k, i+1);
    if (answer != -1)
        return answer;
    if (arr[i] == k)
        return i;
    return -1;
} */

int lastOccurance (int arr[], int n, int k, int i) {
    // same as firstOccurance except we start from last  // better than prev approach
    // i is n-1
    if (i == 0)
        return -1;
    else if (arr[i] == k)
        return i;
    else 
        return lastOccurance(arr, n, k, i-1);
}

/* int lastOccurance (int arr[],int n,int t) {
    if (arr[n-1]==t) {
        return n-1;
    }
    return lastOccurance(arr,n-1,t);
} */

int main () {
    //cout << fibonaci(5) << endl;
    // cout << sum(4) << endl;
    //cout << power(2, 5) << endl;
    //cout << factorial(5) << endl;
    // int arr[] = {1, 2, 2, 4, 5};
    // cout << checkSorted(arr, 5) << endl;
    //printNoDec(9);
    //printNoInc(9);
    int arr[] = {1, 2, 3, 2, 5, 2, 3};
    //cout << firstOccurance(arr, 7, 2, 0) << endl;
    cout << lastOccurance(arr, 7, 2, 6) << endl;
}