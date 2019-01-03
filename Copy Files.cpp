//QUES 26 PAGE 342
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
int main()
{
	ifstream fin;
	ofstream fout;
	int i,n,flag=0;
	char s[80],ch;
	cout<<"ENTER THE NUMBER OF FILES: ";
	cin>>n;
	fout.open("file.txt",ios::out);
	for(i=0;i<n;i++)
		cin.getline(s,80,'\n');
	fout.close();
	cout<<"\nENTER THE CHARACTERS TO COPY FILES: ";
	cin>>ch;
	fin.open("file.txt",ios::in);
	while(cin.eof())
	{
		for(i=0;i<n;i++)
		{
			if(s[0]==ch)
			{
				cout<<"\ncharacter found"<<endl;
				fout.open("modified.txt",ios::out);
				puts(s);
				flag=1;
				break;
			}
		}
	}
	fin.close();
	fout.close();
	if(flag==0)
		cout<<"THERE ARE NO SUCH FILES STARTING WITH CHARACTER "<<ch<<endl;
	else 
	{
		cout<<"THE FILES STARTING WITH CHARACTER "<<ch<<" ARE: "<<endl;
		fin.open("modified.txt",ios::in);
		while(fin.getline(s,80,'\n'))
			puts(s);
		fin.close();
	}
	return 1;
}


//***********OUTPUT***********************************************
/*
ENTER THE NUMBER OF FILES: 3

HELLO
GOOD MORNING
HAVE A NICE DAY

ENTER THE CHARACTERS TO COPY FILES: P
THERE ARE NO SUCH FILES STARTING WITH CHARACTER G

Press Enter to return to Quincy...
*/

