#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Enter a Number: ";
  cin >> number;

  if (number % 2 == 0) {
    cout << "It is even." << endl;
  } else {
    cout << "It is odd." << endl;
  }

  return 0;
}