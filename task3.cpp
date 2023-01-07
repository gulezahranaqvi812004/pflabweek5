#include <iostream>
using namespace std;
int is_greator(int number_1,int number_2);
main()
{
  int number_1;
  int number_2;
  int greator;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  greator=is_greator(number_1, number_2);
  cout <<"Greator value is: "<<greator << endl;
  cout << "Program ends.";
}
int is_greator(int number_1,int number_2)
{
  if(number_1>number_2)
   {
    return number_1;
   }
  if(number_1<number_2)
   {
    return number_2;
   }
  return 0;
}