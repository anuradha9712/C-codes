//QUES 36 PG 733
#include<iostream>
using namespace std;

int main()
{
char s1[50]="xyzt";
char* s2="uabefgnpanm";
char* s3;
char* s4;
char* s5;
char* s6;
s3=s1;
s4=s2;
strcat(s1,s2);
s5=strchr(s1,'y'); 
s6=strrchr(s2,'n');
cout<<s3<<endl;
cout<<s4<<endl;
cout<<s5<<endl;
cout<<s6<<endl;

}



