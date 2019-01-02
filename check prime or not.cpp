#include<iostream.h>
int main()
{int x,n,i,j;
cout<<"enter the number:";
cin>>n;

for(i=2;i<n;i++)
  {if(n%i==0)
    x=1;
	}
	
if(x==1)
  {cout<<"the number is not prime;";}

else
{cout<<"number is prime:";}
return 0;
}

