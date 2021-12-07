#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1; i<10; i++)
    {
        int randomNumber=rand()%10+1;
        cout<<"Random number is="<<randomNumber<<endl;
    }
    getch();
}
