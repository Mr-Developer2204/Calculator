
#include <bits/stdc++.h>
using namespace std;

double add(double num1, double num2) {
  return num1 + num2;
}
// this is alpha
int main() {

  double num1, num2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  cout << "Addition of first number and second number is: " << add(num1, num2);

  return 0;
}
