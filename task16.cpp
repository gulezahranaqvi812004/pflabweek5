#include<iostream>
using namespace std;
main ()
{ 
  double volume;
  double total_volume;
  double final_volume;
  double flow_rate_P1;
  double flow_rate_P2;
  double volume_P1;
  double volume_P2;
  double per_vloume;
  double per_contribution_of_P1;
  double per_contribution_of_P2;
  double contribution_of_P1;
  double contribution_of_P2;
  double overflow;
  float time;

  while(true)
  {
   cout << "Enter the volume of pool: ";
   cin >> total_volume;
   cout << "Enter the flow rate of the first pipe per hour: ";
   cin >> flow_rate_P1;
   cout << "Enter the flow rate of the second pipe per hour: ";
   cin >> flow_rate_P2;
   cout << "Enter the absent hours of worker: ";
   cin >> time;
  
   volume_P1=flow_rate_P1*time;
   volume_P2=flow_rate_P2*time;

   volume=volume_P1+volume_P2;
   final_volume=volume/total_volume;
   if (volume<=total_volume)
   {
     per_vloume=final_volume*100;

    contribution_of_P1=volume_P1/volume;
    contribution_of_P2=volume_P2/volume;

    per_contribution_of_P1=contribution_of_P1*100;
    per_contribution_of_P2=contribution_of_P2*100;

    cout << "The pool is " << per_vloume << " % full."<< endl;
    cout << "Pipe 1 : " << per_contribution_of_P1 << "%." << endl;
    cout << "Pipe 2 : " << per_contribution_of_P2 << "%" <<endl;
   }
   if(volume>total_volume)
   {
     overflow=volume-total_volume;
     cout << "For " << time << " hours the pool overflows with " << overflow << " liters" << endl;
   }
 }
}