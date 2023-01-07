#include <iostream>
#include <cmath>
using namespace std;

main ()
{
   float number_1;
   float result ;
   float radian;
   cout << "Enter the angle: ";
   cin >> number_1;
   radian = number_1/57.2958;
   result=sin(number_1);
   cout << "Sine of " << number_1 << " is " << result;
}