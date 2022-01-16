#include <iostream>
#include <string>
using namespace std;

int main()
{
  
  string esm, famil;
  float sum=0, avg, nomre;
  
  for (int i = 0; i < 3; i++)
  {
    
    cout<<"nomre dars "<<i+1<<" : ";
    cin>>nomre;
    sum += nomre;
  }
  avg = sum / 3;
  cout<<avg <<" ";
 
  if (avg>=17)
    cout<<"Great";
 
  else if (avg<17 && avg >=12 )
    cout<<"Normal";
 
  else if (avg<12)
    cout<<"Fail";
 
  return 0;
}