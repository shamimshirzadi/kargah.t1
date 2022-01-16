#include <iostream>
#include <conio.h>  

using namespace std;

int main()
{
  
  int zel1,zel2,zel3;
  cout<<"zel1,2,3 ra be man bede: ";
  cin>>zel1>>zel2>>zel3;
  
  if (zel1+zel2 <= zel3)
    cout<<"nmitavan hamchin mosalasi keshid";
  
  else if (zel2+zel3 <= zel1)
    cout<<"nmitavan hamchin mosalasi keshid";
  
  else if (zel1+zel3 <= zel2)
    cout<<"nmitavan hamchin mosalasi keshid";
  
  else cout<<"mitavan mosalas ra keshid";
  
  return 0;
}