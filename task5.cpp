#include <iostream>
#include <cmath>
using namespace std;

main ()
{
  float number_1;
  float number_2;
  float power;
  cout << "Enter first number (base): ";
  cin >> number_1;
  cout << "Enter second number (exponent): ";
  cin >> number_2;
   power=pow(number_1,number_2);
  cout << "Power: "<<power<<endl;




}