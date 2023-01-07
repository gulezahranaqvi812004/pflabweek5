#include <iostream>
#include <cmath>
bool symmetrical(int number );
using namespace std;
main ()
{ 
  bool result;
  int number;
  cout << "Enter a three digit number: ";
  cin >> number;
  
  result=symmetrical(number);
  if(result==true)
  {
   cout << number << " ===> symmetrical" << endl;
  }
  if(result==false)
  {
   cout << number << " ===> not symmetrical" << endl;
  }
}
bool symmetrical(int number )
{
 
  int last_digit;
  int for_first_digit;
  int first_digit;

  last_digit=number%10;
  for_first_digit=number/10;
  first_digit=for_first_digit/10;

  if(first_digit==last_digit)
  {
   return true;
  }
  if(first_digit!=last_digit)
  {
   return false;
  }
  return 0;

}


