
#include <bits/stdc++.h>
using namespace std;

double add(double num1, double num2) {
  return num1 + num2;
}


double subtract(double a, double b)
  return a-b;

double multiply(double a, double b){
  return a*b;
}
void divide(double a, double b)
{
  if(b==0)
    cout>>"Division by zero not possible";
  else
    cout >> a/b;
}

// this is alpha
int main() {

  double num1, num2;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  cout << "Addition of first number and second number is: " << add(num1, num2);

  cout << "Subtraction of first number and second number is: " << subtract(num1, num2);

  cout << "Product of first number and second number is: " << multiply(num1, num2);
  cout << "Quotient of first number and second number is: " << divide(num1, num2);


  return 0;
}
