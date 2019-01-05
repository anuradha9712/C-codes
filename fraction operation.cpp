//QUES 41 PG 594 (operator overload += by binary member function)
#include<iostream.h>
class fraction
{
	int num,den;
	int ans;
	public:
		void operator +=(fraction f1)
		{
			fraction f2;
			while(den!=0 && f1.den!=0)
			{
				if(den>f1.den)
				{
					if(den%f1.den==0)
						ans=(num*f1.den+f1.num*den)/den;
					    
					else 
						ans=(num*f1.den+f1.num*den)/(den*f1.den);
						
				}	
				else if(f1.den>den)
				{
					if(f1.den%den==0)
						ans=(f1.num*den+num*f1.den)/f1.den;
					
					else 
						ans=(f1.num*den+num*f1.den)/(den*f1.den);
						
				}
			}	 
			
			cout<<"\nTHE NEW FRACTION IS: "<<ans;
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
			//cout<<"\nTHE FRACTION IS: "<<(num/den);
			cout<<"\nTHE NEW FRACTION IS: "<<float(ans);
		}
};
int main()
{
	fraction f1,f2;
	f1.input();
	f2.input();
	f1+=f2;
	f1.output();
	f2.output();
	return 1;
}
//************OUTPUT**********************************
/*
ENTER NUMERATOR: 15
ENTER DENOMINATOR: 6
ENTER NUMERATOR: 5
ENTER DENOMINATOR: 3
THE NEW FRACTION IS: 4.16667
Press Enter to return to Quincy...
*/

