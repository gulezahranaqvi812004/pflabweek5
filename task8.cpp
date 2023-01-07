#include <iostream>
#include <cmath>
using namespace std;
float height( float degrees,float base);
main ()
{
  float degrees;
  float base;
  float result;

  cout << "Enter the value of base: ";
  cin >> base;
  cout << "Enter the angle of elevation: ";
  cin >>  degrees;

  result=height( degrees, base);
  cout << "Height of tree: " << result << endl;
}

float height( float degrees,float base)
{
  float in_radian;
  float final_angle;
  float one_radian=57.2958;
  float height;

  in_radian=degrees/one_radian;
  final_angle=tan(in_radian);
  height=final_angle*base;
  return height;

}