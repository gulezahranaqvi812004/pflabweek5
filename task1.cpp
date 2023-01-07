#include <iostream>
using namespace std;
int add (int number_1,int number_2);
main()
{
  int number_1;
  int number_2;
  int total;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  total=add (number_1,number_2);
  cout << "Total sum: "<<total <<endl;


}
int add (int number_1 , int number_2)
{
  int sum;
  sum=number_1+number_2;
  return sum;
}