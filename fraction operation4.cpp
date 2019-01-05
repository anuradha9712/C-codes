//QUES 45 PG 594(operator overload () by binary member function)
#include<iostream.h>
class fraction
{
	int num,den;
	int ans;
	public:
		int operator ()(fraction f1)
		{
			ans=num%den;
			return ans;
		}
		void input()
		{
			cout<<"\nENTER NUMERATOR: ";
			cin>>num;
			cout<<"\nENTER DENOMINATOR: ";
			cin>>den;
			if(den==0)
			{
				cout<<"\nINVALID INPUT, RE-ENTER: ";
				cin>>den;
				while(den==0)
				{
					cout<<"\nINVALID INPUT, RE-ENTER: ";
					cin>>den;
				}
			}
		}
		void output()
		{
			cout<<"\nNUMERATOR: "<<num;
			cout<<"\nDENOMINATOR: "<<den;
			cout<<"\nTHE FRACTION IS: "<<ans;
		}
};
int main()
{
	fraction f1,f2;
	f1.input();
	f2=(f1);
	f2.output();
	return 1;
}
//*************OUTPUT*********************************
/*

ENTER NUMERATOR: 18

ENTER DENOMINATOR: 5

NUMERATOR: 18
DENOMINATOR: 5
THE FRACTION IS: 3
Press Enter to return to Quincy...
*/

