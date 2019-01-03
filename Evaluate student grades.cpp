//program to determine student's grade; scores b/w (0-100)
#include<iostream.h>
float score1(float sum)
{
	float science,maths,english;
	cout<<"\nSCORES OF STUDENTS";
	cout<<"\nMARKS IN SCIENCE: ";
	cin>>science;
	cout<<"\nMARKS IN MATHS: ";
	cin>>maths;
	cout<<"\nMARKS IN ENGLISH: ";
	cin>>english;
	sum=science+maths+english;
	return sum;
}	 
char score2(float t)
{
	char grade;
	float total;
	t=total/3;
	if(t>90 || t<=100)
		grade='A';
	else if(t>70 || t<=90)
		grade='B';
	else if(t>50 || t<=70)
		grade='C';
	else if(t>=0 || t<=50)
		grade='D';
	cout<<endl<<grade;
	return grade;
}
void score3(char grade)
{
	cout<<"\nTHE GRADE OF THE STUDENT IS: "<<grade;
}
int main()
{
	float sum=0,t;
	char grade;
	t=score1(sum);
	grade=score2(t);
	score3(grade);
	return 1;
}
//********OUTPUT****************
/*

SCORES OF STUDENTS
MARKS IN SCIENCE: 70

MARKS IN MATHS: 53

MARKS IN ENGLISH: 89

THE GRADE OF THE STUDENT IS: B
Press Enter to return to Quincy...

*/

