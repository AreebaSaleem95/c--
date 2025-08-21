#include<iostream>
using namespace std;
class person
{
	protected:
		int id;
		char name[50];
		char adress[50];
	public:
		person()
		{
			id=0;
			name[0]='\0';
			adress[0]='\0';
		}
		void getinfo(){
			cout<<"enter your id:";
			cin>>id;
			cout<<"enter your name:";
			gets(name);
			cout<<"enter your address:";
			gets(adress);
		}
		void show(){
			cout<<"\n your personal info as a follow:";
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			cout<<"address="<<adress<<endl;
			
		}
};
class student:public person
{
	private:
		int rollno,marks;
		public:
			student() : person() {
        rollno = 0;
        marks = 0;
			}
	void getedu(){
		cout<<"enter your rollno:";
		cin>>rollno;
		cout<<"enter your marks:";
		cin>>marks;
	}
	void showedu(){
		cout<<"your educational innformation as a follow:";
		cout<<"rollno="<<rollno<<endl;
		cout<<"marks="<<marks<<endl;
	}
	
};
	int main()
{
		student s;
		s.getinfo();
		s.getedu();
		s.getedu();
		s.showedu();
		return 0;
	}