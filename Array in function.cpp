#include<iostream>
#include<conio.h>
using namespace std;

void display(int num[])
{
    int i;
    cout<<"the array is=";
    for(i=0; i<8; i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int number[8]= {4,5,2,1,63,5,42,10};

    display(number);
    getch();
}
