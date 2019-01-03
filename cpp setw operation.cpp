//QUES 43 PG 482
#include<iostream>
#include<iomanip.h>
using namespace std ;

int main()
{
int num[5]={ 3,4,6,2,1};
int* p=num;
int* q=num+2;
int* r=&num[1];
cout<<setw(3)<<num[2]
    <<setw(3)<<*(num+2)
	<<endl;
cout<<setw(3)<<*p
    <<setw(3)<<*(p+1)
	<<endl;
cout<<setw(3)<<*q
    <<setw(3)<<*(q+1)
	<<endl;
cout<<setw(3)<<*r
    <<setw(3)<<*(r+1)
	<<endl;
		   
return 0;

}	 

