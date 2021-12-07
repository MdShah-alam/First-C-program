#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers a,b=";
    cin>>a>>b;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(4);
    float sum=a+b;
    cout<<setw(15)<<"sum="<<sum<<endl;
    float sub=a-b;
    cout<<setw(15)<<"subtraction="<<sub<<endl;
    float mul=a*b;
    cout<<setw(15)<<"multiplication="<<mul<<endl;
    float div=a/b;
    cout<<setw(15)<<"division="<<div<<endl;
    int rem=a%b;
    cout<<setw(15)<<"reminder="<<rem<<endl;

    getch();
}
