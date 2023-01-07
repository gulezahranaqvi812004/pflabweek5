#include <iostream>
using namespace std;
int multiply(int number ,int total );
main()
{
  int number;
  int result;
  cout << "Enter a number: ";
  cin >> number;
 
 result=multiply(number , result);
 cout << "Result: " << result;
}
int multiply(int number,int total )
{
    total=number*5;
    return total;
}
