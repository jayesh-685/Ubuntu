#include "bits/stdc++.h"
using namespace std;

int main () {
    /* algo to print prime no in a eff way
    if we want to print prime nos till 50 then we will start from 2 and mark multiples of each no till 50
    we will repeat this till sqrt 50 that is 7
    also for each no we will start marking its multiples from square of it since previous multiples would
    have been already marked ex start from 9 for 3 and 16 for 4
    then just print the unmarked nos*/
    int n;
    cin >> n;
    int arr[n+1] = {0};
    for (int i=2; i*i <= n; i++) {
        if (arr[i] == 0) {
            for (int j=i*i; j<=n; j+=i) 
                arr[j] = 1;
        }
    }

    for (int i=2; i<=n; i++) 
        if (arr[i] == 0)
            cout << i << " ";

    return 0;
}