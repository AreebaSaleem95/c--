#include<iostream>
using  namespace std;
void show(int arr[]);
int main(){
	int num[5],i;
	cout<<"Enter five integers:"<<endl;
	for(i=0;i<5;i++)
	cin>>num[i];
	show(num);
	
}
void show(int arr[]){
	int j;
	cout<<"the value in array:\n";
	for(j=0;j<5;j++)
	cout<<arr[j]<<"\t";
}