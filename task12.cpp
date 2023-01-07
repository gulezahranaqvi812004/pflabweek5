#include <iostream>
using namespace std;

string even_odd();

main ()
{
 string result;
 while(true)
 {
 result=even_odd();
 cout << result << endl;
 }

}
string even_odd()
{ 
int number_by_user;
int first_digit;
int for_second;
int second_digit;
int for_third;
int third_digit;
int for_fourth;
int fourth_digit;
int last;
int final;

cout << "Enter any 5-digit number: ";
cin >> number_by_user;

first_digit=number_by_user%10;
for_second=number_by_user/10;
second_digit=for_second%10;
for_third=for_second/10;
third_digit=for_third%10;
for_fourth=for_third/10;
fourth_digit=for_fourth%10;
last=for_fourth/10;

final=first_digit+second_digit+third_digit+fourth_digit+last;
 
 if(final%2==0)
 {
    return "evenish";
 }
 if(final%2!=0)
 {
    return "oddish";
 }

 
}
