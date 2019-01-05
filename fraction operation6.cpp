//Q 42 PG 594(overload unary operator - to change sign of fraction)
#include<iostream.h>
class fraction
{
	float num,den,ans;
	public:
		fraction operator -(fraction f1)
		{
			while(den!=0)
			{
				if(num>0 && den>0)
					f1.num=-num;
				else if(num>0 && den<0)
					f1.den=-den;
				else if(num<0 && den<0)
					f1.num=-num;
				else if(num<0 && den>0)
					f1.num=-num;
			return f1;
		}
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
			//cout<<"\nNUMERATOR: "<<num;
			//cout<<"\nDENOMINATOR: "<<den;
			cout<<"\nTHE FRACTION IS: "<<float(num/den);
		}
};
int main()
{
	fraction f1,f2,f3;
	f1.input();
	f2.input();
	f3=f1-f2;
	f3.output();
	
	return 1;
}
//************OUTPUT**********************************
/*
ENTER NUMERATOR: 15
ENTER DENOMINATOR: 6
THE FRACTION IS: -2.5
Press Enter to return to Quincy...
*/

