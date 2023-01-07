#include <iostream>
#include <cmath>
using namespace std;
float quadratic_psitive(float a, float b , float c);
float quadratic_negative(float a, float b , float c);
main ()
{
  int a;
  int b;
  int c;
  float x_positive;
  float x_negative;

  cout <<"Enter the value of a: ";
  cin >> a;
  cout <<"Enter the value of b: ";
  cin >> b;
  cout <<"Enter the value of c: ";
  cin >> c;

  x_positive=quadratic_psitive(a,b,c);
  cout << "x= " << x_positive << endl;

  x_negative=quadratic_negative(a,b,c);
  cout << "x= "<< x_negative << endl;
}

float quadratic_psitive(float a, float b , float c)
{

  float dis;
  float sq_root_dis;
  int square_of_b;
  float square_root;
  float x_positive;


  square_of_b=pow(b,2);
  dis=square_of_b-4*a*c;
  sq_root_dis=sqrt(dis);

  x_positive=(-b+sq_root_dis)/(2*a);
  return x_positive ; 
}

float quadratic_negative(float a, float b , float c)
{
  float dis;
  float sq_root_dis;
  int square_of_b;
  float square_root;
  float x_negative;


  square_of_b=pow(b,2);
  dis=square_of_b-4*a*c;
  sq_root_dis=sqrt(dis);

  x_negative=(-b-sq_root_dis)/(2*a);
  return x_negative;
}
