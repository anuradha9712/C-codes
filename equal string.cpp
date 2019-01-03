//QUES 41 PG 733
#include<iostream.h>
#include<string.h>
#include<stdio.h>
int main()
{
	int i,j,l1,l2,k=0,flag=0;
	char str1[80],str2[80];
	fflush(stdin);
	cout<<"enter string 1: ";
	gets(str1);
	cout<<"\nenter string 2: ";
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	k=l2-8;
	for(i=0,j=k;i<8&&j<l2;i++,j++)
	{
		if(str1[i]==str2[j])
		{
			cout<<"\nequal";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"\nunequal";
	return 1;
}

