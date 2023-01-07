#include <iostream>
using namespace std;
string text1(int number_1);
string text2(int number_2);

main ()
{

  int number;
  int num1;
  int num2;
  int number_1;
  int number_2;
  string result1;
  string result2;
  cout << "Enter two digit number but not in between 11 to 29:  ";
  cin >> number;
  number_1=number/10;
  number_2=number%10;
  result1=text1(number_1);
  result2=text2(number_2);
  cout << result1 << " " << result2 ;
}


string  text1(int number_1)
{
  if(number_1==2)
  {
   return " ";
  }
  if(number_1==3)
  {
    return "thirty";
  }
  if(number_1==4)
  {
    return "fourty";   
  }
  if(number_1==5)
  {
    return "fifty";
  }
  if(number_1==6)
  {
    return "sixty";  
  }
  if(number_1==7)
  {
    return "seventy";  
  }
  if(number_1==8)
  {
    return "eighty";  
  }
  if(number_1==9)
  {
    return "ninty";  
  }
  return "";

}

string text2(int number_2)
{
  if(number_2==0)
  {
    return " ";
  }
  if(number_2==1)
  {
    return "one";
  }
  if(number_2==3)
  {
    return "three";
  }
  if(number_2==4)
  {
    return "four";
  }
  if(number_2==5)
  {
    return "five";
  }
  if(number_2==6)
  {
    return "six";
  }
  if(number_2==7)
  {
    return "seven";
  }
  if(number_2==8)
  {
    return "eight";
  }
  if(number_2==9)
 { 
    return "nine";
  }
    return "";
}