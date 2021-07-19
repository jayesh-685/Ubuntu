#include "bits/stdc++.h"
using namespace std;

/* The operators |, &, and ~ act on individual bits in parallel. They can be used only on integer types. a | b does an independent OR operation of each bit of a with the corresponding bit of b to generate that bit of the result.

The operators ||, &&, and ! act on each entire operand as a single true/false value. Any data type can be used that implicitly converts to bool. Many data types, including float implicitly convert to bool with an implied !=0 operation. */

int getBit (int n, int pos) {
    // if we want to know which digit is at a given position in a binary number
    // we can create a number with 1 at the given position (using left shift operator)
    // suppose we want to know which digit is at pos 2 in the number n = 0101 (start indexing from right from 0)
    // then we create another number 0100 using left shift operator on 1 (0001) by 2
    // then take logical and (&) of given number and our number
    // so in the result digits at all other places would be 0  (result = 0100)
    // if result is 0 then the digit was 0 at the required position otherwise it was 1
    // if n & (n << i) != 0 then bit is 1   (i is the position)

    return (n & (1<<pos)) != 0;
}

int setBit(int n, int pos) {
    // if we want to set bit (1) at a particular position
    // ex if we want to convert 0101 to 0111 then we will set bit at pos 1
    // again we will create a number with bit at required pos and return or with our number

    return (n | (1<<pos));
}

int clearBit (int n, int pos) {
    // create 1<<pos, negate it, take and with n
    return n & (~(1<<pos));
}

int updateBit (int n, int pos, int value) {
    // update bit is clearBit + setBit with given value (0 or 1)
    //clearBit
    int mask = ~(1<<pos);
    n = n & mask;
    // setBit (0 or 1)
    return (n | (value<<pos));
}

int main () {
    cout << getBit(5, 2) << endl;         //1
    cout << setBit(5, 1) << endl;         //7
    cout << clearBit(13, 2) << endl;      // 9
    cout << updateBit(5, 1, 1) << endl;   // 7
}