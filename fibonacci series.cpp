#include<iostream.h>
int main()
{int n,r,j=1,num=0;
cout<<"enter the number of terms:";
cin>>n;
cout<<num<<"\t"<<j;
for(int i=3;i<=n;i++)
{r=num+j;
cout<<"\t"<<r<<"\t";
num=j;
j=r;
}
return 0;
}

