//QUES 46 PG 594(operator overload [] by binary member function)
#include<iostream.h>
class fraction
{
	int num,den,ans;
	public:
		int operator [](fraction f1)
		{
			while(den!=0 && f1.den!=0)
				ans=num%den;
			return ans;
		}
		void input()
		{
			cout<<"\nENTER NUMERATOR: ";
			cin>>num;
			cout<<"\nENTER DENOMINATOR: ";
			cin>>den;
		}
		void output()
		{
			cout<<"\nNUMERATOR: "<<num;
			cout<<"\nDENOMINATOR: "<<den;
			cout<<"\nTHE FRACTION IS: "<<ans<<"/"<<den;
		}
};
int main()
{
	fraction f1,f2,f3;
	f1.input();
	f1[]f2;
	f1.output();
	return 1;
}
//************OUTPUT**********************************
/*
ENTER NUMERATOR: 26
ENTER DENOMINATOR: 7
NUMERATOR: 15
DENOMINATOR: 6
THE FRACTION IS: 5/7
Press Enter to return to Quincy...
*/

