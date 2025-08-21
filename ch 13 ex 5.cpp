#include<iostream>
using namespace std;
#include<cstring>
class car
{
	char name[20];
	char dir;
	float pos;
	public:
	 car()
	 {
	 	strcpy(name,"noname");
	 	dir='e';
	 	pos=0;
	 }
	void reset(){
		cout<<"enter car name:";
		gets(name);
		cout<<"enter direction:";
		cin>>dir;
		cout<<"enter position:";
		cin>>pos;
	}
	void turn(){
		if(dir=='e')
		dir='n';
		else if(dir=='n')
		dir='w';
		else if(dir=='w')
		dir='s';
		else if(dir=='s')
		dir='e';
		
	}
	void turn(char d){
		dir=d;
	}
	void move(int d){
		pos=pos+d;
	}
	void show(){
		cout<<"the direction of car is:";
		switch(dir){
			case 'e':
			cout<<"east";
			break;
			case 'n':
			cout<<"north";
			break;
			case 'w':
			cout<<"west";
			break;
			case 's':
			cout<<"south";
			break;
		}
		cout<<"\n\t is standing at"<<pos<<"position"<<endl;
	}
	
};
int main()
{
  car x;
 x.reset();
x.move(100);
x.show();
 x.turn();
 x.show();
 return 0;
}