#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"Enter two number:";
     cin>>x>>y;
     max(x,y);
     return 0;
 }3
void max(int a, int b)
{
if(a>b)
	cout<<"Maximum number is:"<<a<<endl;
	
else
	cout<<"maximum number is:"<<b<<endl;


}