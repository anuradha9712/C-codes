//QUES 42 PG 733
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="HELLO, GOOD MORNING.";
	string str2="HAVE A NICE DAY..->";
	cout<<str1<<endl;
	cout<<str2<<endl;
	str2.append(str1,5,5);
	cout<<"\nNEW STRING IS:"<<str2;
	return 1;
}




//********OUTPUT*********************
/*
HELLO, GOOD MORNING.
HAVE A NICE DAY..->

NEW STRING IS:HAVE A NICE DAY..->, GOO
Press Enter to return to Quincy...
*/

