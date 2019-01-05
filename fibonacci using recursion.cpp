#include<iostream.h>
using namespace std;

void fibo(int n,int num,int j,int i)
{
 if (i<=n)
 {
   cout<<num+j<<"\t";
   fibo(n,j,num+j,++i);
   
 }
 
}

int main()
{ 

  int n,r,j,num,i=3;
  cout<<"enter the number of terms:";
  cin>>n;
  cout<<"enter the first digit:";
  cin>>num;
  cout<<"enter the second digit:";
  cin>>j;
  cout<<num<<"\t"<<j<<"\t";
  fibo(n,num,j,i);

return 0;
}

