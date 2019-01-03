//QUES 51 PG 222
#include<iostream>
using namespace std;

void score(int &s1,int &s2,int &s3)
{ 
 cout<<"=======score========"<<endl;
 cout<<"Enter the score 1: "<<endl;
 cin>>s1;
 cout<<"Enter the score 2: "<<endl;
 cin>>s2;
 cout<<"Enter the score 3: "<<endl;
 cin>>s3;
 
}

char Grade(int &s1,int &s2,int &s3,char &grade) 
{

  float avr;
 
 avr=(s1+s2+s3)/3;
 
  if(avr>=90)
    {grade='A';}
 
  else if(90>avr || avr>=70)
 { 
   if(s3>90)
    grade='A';
   else
    grade='B';
  }
  
  else if(70>avr || avr>=50)
  {
   {
   if(((s3+s2)/2)>70)
   grade='C';
   else
   grade='D';
  }
 }
 
  else if (avr<50)
    {grade='E';}
 

}

void result(char &grade)
{
 cout<<"THE GRADE OF STUDENT: "<<grade<<endl;
 }
 
 
int main()
{ ;
 int num,s1,s2,s3;
 char grade;
 cout<<"ENTER THE NUMBER OF STUDENTS: ";
 cin>>num;
 while(num!=0)
 {
  
 for(int i=0;i<num;i++)
 {cout<<"====================\n";
  cout<<"RECORD OF STUDENT"<<endl;
  cout<<"====================\n";
   score(s1,s2,s3);
   Grade(s1,s2,s3,grade);
   result(grade);
   
 num--;
 }
 }
 return 0;
 }
  

