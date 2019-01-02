//PG 733 QUES 49
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="MELOWDRAMATIC PERSON.";
	string str2="DO SAFE JOURNEY.";
	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<"THE FIRST OCCCURRENCE OF ANY CHARACTER OF STR2 THAT ARE NOT IN STR1 IS: "<<str1.find_first_not_of(str2);
	return 1;
}


//***********************OUTPUT*************************************
/*
MELOWDRAMATIC PERSON.
DO SAFE JOURNEY.
THE FIRST OCCCURRENCE OF ANY CHARACTER OF STR2 THAT ARE NOT IN STR1 IS: 0
Press Enter to return to Quincy...
*/

