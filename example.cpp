#include <iostream>
using namespace std;

int add (int number_1,int number_2);
float divide(float number_1 , float number_2);
int is_greator(int number_1,int number_2);
main()
{
  int number_1;
  int number_2;
  int total;
  int greator;
  float division;
  cout << "Enter a number: ";
  cin >> number_1;
  cout << "Enter second number: ";
  cin >> number_2;
  total=add (number_1,number_2);
  cout << "Total sum: "<<total <<endl;
  division=divide( number_1 , number_2);
  cout << "Division of given numbers: "<<division<<endl;
  greator=is_greator(number_1, number_2);
  cout <<"Greator value is: "<<greator << endl;
  cout << "Program ends.";
}

int add (int number_1 , int number_2)
{
  int sum;
  sum=number_1+number_2;
  return sum;
}

float divide(float number_1 , float number_2)
{
  float divide=number_1/number_2;
  return divide;
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