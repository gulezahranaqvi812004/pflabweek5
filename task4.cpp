#include <iostream>
using namespace std;
int is_smaller(int number_1,int number_2);
main()
{
  int number_1;
  int number_2;
  int smaller;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  smaller=is_smaller(number_1, number_2);
  cout <<"Smaller value is: "<<smaller << endl;
  cout << "Program ends.";
}
int is_smaller(int number_1,int number_2)
{
  if(number_1<number_2)
   {
    return number_1;
   }
  if(number_1>number_2)
   {
    return number_2;
   }
  return 0;
}