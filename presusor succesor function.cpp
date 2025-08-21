#include<iostream>
using namespace std;
void value(int);
int main()
{
	int x;
	cout<<"Enter your number:";
	cin>>x;
	value(x);
	return 0;
}
void value(int x){
	int p,n;
	p=x-1;
	n=x+1;
	cout<<"the number brfore"<<x<<"is"<<p<<endl;
	cout<<"the number after"<<x<<"is"<<n<<endl;

}