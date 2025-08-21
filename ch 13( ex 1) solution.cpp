#include<iostream>
using namespace std;
class player
{
	private:
		char name[50];
		float avg;
		char team[50];
	public:
		player(){
			cout<<"enter name:";
			gets(name);
			cout<<"avg:";
			cin>>avg;
			cout<<"enter team:";
			gets(team);
		}
	void input(){
		cout<<"enter name:";
			gets(name);
			cout<<"avg:";
			cin>>avg;
			cout<<"enter team:";
			gets(team);
		
	}	
	void display(){
		cout<<"player name:"<<name<<endl;
		cout<<"average:"<<avg<<endl;
		cout<<"team name:"<<team<<endl;
	}
	void change(const char n[],float a,const char t[]){
		strcpy(name,n);
		avg=a;
		strcpy(team,t);
		
	}
};
int main(){
	player p1;
	p1.display();
	p1.change("yousaf",80.59,"pakistan");
	p1.display();
	return 0;
}
	