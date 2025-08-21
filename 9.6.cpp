#include<iostream>
using namespace std;
void chk_number(int n){
	int c,i;
	c=0;
	for(i=2;i<n;i++){
		if(n%i==0)
		c=1;
	}


if(n%2==0 && c==0)
cout<<n<<"is a prime even number:";
else if(n%2!=0 && c==0)
cout<<n<<"is a prime odd number:";
else if(n%2==2 && c!=0)
cout<<n<<"is only even number,not prime:";
else if(n%2!=0)
cout<<n<<"is only odd number,not prime:";
else 
cout<<"is not a prime number";
}

int main()
{
	int n;
	cout<<"\n Enter a number:";
	cin>>n;
	cout<<"\n nature of number:";
	cout<<"\n__________\n";
	chk_number(n);
	return 0;
}