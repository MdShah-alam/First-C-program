#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=10,y=20;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    cout<<"The value of x="<<x<<endl;
    cout<<"The address of x="<<&x<<endl;
    cout<<"The value of y="<<y<<endl;
    cout<<"The address of y="<<&y<<endl;

    int sum=*ptr1+*ptr2;
    cout<<"The sum is="<<sum;

    getch();

}
