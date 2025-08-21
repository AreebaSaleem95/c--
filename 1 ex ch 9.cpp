#include<iostream>
using namespace std;
void dectobin(int num,int base);
int main(){
	int decimalnum;
	int base;
	base=2;
	cout<<"Enter the number in decimals";
	cin>>decimalnum;
	cout<<endl;
	cout<<"decimal"<<decimalnum<<"=";
	dectobin(decimalnum,base);
	cout<<"binary"<<endl;
	return 0;
}
void dectobin(int num,int base)
{
	if(num>0){
		dectobin(num/base,base);
		cout<<num%base;
	}
}