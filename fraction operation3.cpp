//QUES 33 PG 594(operator overload *= by binary member function)
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
			frac=0.0;
		}
		fraction(int n,int d)
		{
			num=n;
			den=d;
		}
		void operator *=(fraction f1)
		{
			fraction f2;
			f2.frac=f2.frac+(frac*f1.frac);
			cout<<"\nTHE NEW FRACTION IS: "<<f2.frac;
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
	f1*=f2;
	return 1;
}


//**********OUTPUT**********************
/*

ENTER NUMERATOR: 6

ENTER DENOMINATOR: 2

ENTER NUMERATOR: 8

ENTER DENOMINATOR: 4

THE NEW FRACTION IS: 6
Press Enter to return to Quincy...
*/ 

