#include<iostream>
using namespace std;

void printstar(int blnk,int stars);
int main(){
	int lines,counter,blnk;
	cout<<"Enter the number of star line b/w(1 to 20):";
	cin>>lines;
	while(lines<=0 || lines>20){
	cout<<"Enter the number of star line should b/w(1 to 20):";
	cout<<"Enter the number of star line to print(1 to 20):";
cin>>lines;
		
	}
	cout<<endl<<endl;
	blnk=30;
	for(counter=1;counter<=lines;counter++){
		printstar(blnk,counter);
		blnk--;
	}
	return 0;
	
}
void printstar(int blnk,int star){
	int  count;
 for(count=1;count<=blnk;count++)
 cout<<"";
  for(count=1;count<=blnk;count++)
cout<<"*";
cout<<endl;
}
