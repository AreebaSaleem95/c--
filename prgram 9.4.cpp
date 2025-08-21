#include<iostream>
voidvalue(int);
voidmain ()
{

intx;
cout<<"enter an integers";
cin>>x;
value(x);

}
voidvalue(intx)
{
               int p,n;
               p=x-1;
               n=x+1;
               cout<<"the number before"<<x<<"is" <<p<<endl;
               cout<<"the number after "<<x<<"is"<<n<<endl;
}              
