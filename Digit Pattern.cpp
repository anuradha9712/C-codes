// QUES 38 PG 293
#include<iostream.h>
int main()
{
	int i,j,n;
	cout<<"NUMBER OF DIGITS : ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			cout<<j<<" ";
		cout<<endl;
	}
	return 1;
}

//************OUPUT****************
/*
NUMBER OF DIGITS: 9
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

