#include<iostream>
#include<conio.h>
using namespace std;

void display(int *num)
{
    *num=20;
}

int main()
{
    int n=10;
    cout<<"Before calling function n ="<<n<<endl;
    display(&n);
    cout<<"After calling function n="<<n;

    getch();

}
