#include <iostream>
#include <windows.h>
using namespace std;
main ()
{
  int input_minutes;
  int output_minutes;
  int input_hours;
  int output_hours;
  int standard=15;
  int new_minute;
  int output_hrs;
  int output_min;

  cout <<"Enter the time in hours: ";
  cin >>input_hours;
  cout << "Enter the time in minutes: ";
  cin >> input_minutes;
  new_minute=input_minutes+standard;

  if(input_hours==23)
    {
      if(new_minute<60)
       {
         output_hours=24-input_hours;
         output_minutes=new_minute;
         cout << output_hours << ":" << output_minutes;
       }
    }
    if(input_hours<23)
   {
     if (new_minute>60)
      {
         output_minutes=new_minute-60;
         output_hours=input_hours+1;
        cout << output_hours << ":" << output_minutes;
      }
   }
    if(input_hours<23)
   {
     if(new_minute<60)
     {
      output_hours=input_hours;
      output_minutes=new_minute;
      cout << output_hours << ":" << output_minutes;
     }
   }
   if(input_hours==23)
   {
    if(new_minute>60)
     {
      output_hours=23-input_hours;
      output_minutes=new_minute-60;
       cout << output_hours << ":" << output_minutes;
     }
   }
}
  