#include<iostream>
#include<conio.h>
using namespace std;

int  fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);

}
int main()
{
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    int factorial= fact(n);
    cout<<"Factorial="<<factorial;
    getch();
}
