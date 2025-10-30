#include <iostream>
using namespace std;

void Binary(int* xptr);

int main() {
    int x;
    cout << "Enter Any Number To Convert in Binary: ";
    cin >> x;
    
    if (x == 0) {
        cout << "0" << endl;
    } else {
        Binary(&x);
    }
    cout << endl;
    return 0;
}

void Binary(int* xptr) {
    if (*xptr == 0) {
        return;
    }
    
    int remainder = *xptr % 2;
    *xptr /= 2;
    Binary(xptr);
    
    cout << remainder;
}