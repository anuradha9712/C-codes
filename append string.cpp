//PG 733 QUES 40 (copy str1 to str2)
#include<iostream.h>
#include<string.h>
#include<stdio.h>
int main()
{
	char str1[80],str2[80];
	cout<<"ENTER STRING 1: ";
	gets(str1);
	fflush(stdin);
	cout<<"ENTER STRING 2:";
	gets(str2);
	fflush(stdin);
	strcpy(str1,str2);
	cout<<"\nCOPIEd string is: ";
	puts(str1);
	return 1;
}


//*************OUTPUT*******************
/*
ENTER STRING 1: HELLO,GOOD MORNING.
ENTER STRING 2: BYE-BYE.
COPIED STRING IS:.BYE-BYE.
Press Enter to return to Quincy.....
*/

