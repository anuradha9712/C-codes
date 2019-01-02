#include<iostream.h>
using namespace std;

void alter(int *p,int*q);
int main()
{
  int a,b;
  cout<<"enter first number:"<<"\n";
  cin>>a;
  cout<<"enter second number:";
  cin>>b;
  alter(&a,&b);
  cout<<"===after alter==="<<"\n";
  cout<<"value of first number:"<<a<<"\n"<<"value of second number:"<<b;
  
}

void alter(int *p,int*q)
{
 *p=*p*(*p);
 *q=*q*(*q);
 
}

