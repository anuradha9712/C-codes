#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 char ch;
 string str;
 ofstream f3("file.txt");
 cout<<"enter the string: ";
 getline(cin,str);
 cout<<"string="<<str.size()<<"\n";
 for(int i=0;i<str.size();i++)
 {
 f3.put(str[i]);
 cout<<str[i]<<"\n";
 }
  f3.put('\n');
 cout<<"file written\n";
 f3.close();
 
 ifstream f1("file.txt");
 ofstream f2("file2.txt");
 cout<<"file copied\n";
 
 //while(!f1.eof())
 while(f1)
 {
  f1.get(ch);
  cout<<"ch="<<ch<<"\n";
  if ((ch>=65&&ch<=91)||(ch>=97&&ch<=123)||(ch>=48&&ch<=57))
   f2.put(ch);
 }
 f2.close();
 f1.close();

 
 return 0;
 
}

