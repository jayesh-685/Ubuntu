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

int main () {
    cout << fibonaci(5) << endl;
    // cout << sum(4) << endl;
    //cout << power(2, 5) << endl;
    cout << factorial(5) << endl;
}