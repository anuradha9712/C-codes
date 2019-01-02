//PG 342 QUES 19(appending one file to other)
#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
int main()
{
	fstream f;
	int i,n,n1;
	char str[80];
	cout<<"ENTER THE NUMBER OF FILES: ";
	cin>>n;
	f.open("append.txt",ios::out);
	for(i=0;i<=n;i++)
	{
		gets(str);
		fflush(stdin);
		f<<str;
		f<<"\n";
	}
	f.close();
	f.open("append.txt",ios::in);
	while(f.getline(str,80,'*'))
		puts(str);
	f.close();
	cout<<"\nENTER THE NUMBER OF FILES TO APPEND: ";
	cin>>n1;
	f.open("append.txt",ios::out|ios::app);
	for(i=0;i<=n1;i++)
	{
		gets(str);
		fflush(stdin);
		f<<str;
		f<<"\n";
	}
	f.close();
	cout<<"\nfile after appending :\n ";
	f.open("append.txt",ios::in);
	while(f.getline(str,80,'*'))
		puts(str);
	f.close();
	cout<<endl;
	return 1;
}



//**********OUTPUT***********************
/*
ENTER THE NUMBER OF FILES: 5

HELLO
GOOD MORNING
HAVE A NICE DAY
HAPPY BIRTHDAY
OH GOD HELP ME

HELLO
GOOD MORNING
HAVE A NICE DAY
HAPPY BIRTHDAY
OH GOD HELP ME

ENTER THE NUMBER OF FILES TO APPEND: 2

GOD BLESS YOU
I WILL MISS YOU

HELLO
GOOD MORNING
HAVE A NICE DAY
HAPPY BIRTHDAY
OH GOD HELP ME
GOD BLESS YOU
I WILL MISS YOU

Press Enter to return to Quincy...
*/

