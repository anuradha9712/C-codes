#include<iostream.h>
using namespace std;

long fact(int n)
{ 
 if (n>0)
  return n*fact(n-1);
 else
   return 1;

}

int main()
{
 int n,r;
 cout<<"enter the number:";
 cin>>n;
 r=fact(n);
 cout<<"factorial of given number:"<<r;

return 0;

}

  

