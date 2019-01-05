//QUES 44 PG 594(operator overloading || to check if any faction is zero)
#include<iostream.h>
class fraction
{
	int num,den;
	float frac;
	public:
		fraction()
		{
			num=0;
			den=0;
			frac=0;
		}
		fraction(int n,int d)
		{
			num=n;
			den=d;
		}
		int operator ||(fraction f1)
		{
			if(frac==0 || f1.frac==0)
				return 1;
			else 
				return 0;
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
			frac=float(num/den);
		}
		void output()
		{
			cout<<"\nNUMERATOR: "<<num;
			cout<<"\nDENOMINATOR: "<<den;
		}
};
int main()
{
	fraction f1,f2;
	f1.input();
	f2.input();
	if(f1||f2)
		cout<<"\nONE OF THE FRACTION IS ZERO";
	else 
		cout<<"\nNO FRACTION IS ZERO";
	return 1;
}
//**********OUTPUT******************
/*

ENTER NUMERATOR: 0

ENTER DENOMINATOR: 3

ENTER NUMERATOR: 5

ENTER DENOMINATOR: 2

ONE OF THE FRACTION IS ZERO
Press Enter to return to Quincy...
*/

