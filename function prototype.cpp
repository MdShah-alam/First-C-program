#include<iostream>
#include<conio.h>
using namespace std;
void addition(int x, int y);//function prototype
int main()
{
    int a , b;
    cout<<"Enter the value of a =";
    cin>>a;
    cout<<"Enter the value of b =";
    cin>>b;
    addition(a,b);
    getch();
}
void addition(int x, int y)
{
    int sum=x+y;
    cout<<"sum is="<<sum;
}

