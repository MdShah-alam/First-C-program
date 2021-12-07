#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int guessNumber;
        cout<<"Enter your guess number between 1 to 5 =";
        cin>>guessNumber;
        int randomNumber=rand()%5+1;
        if(guessNumber==randomNumber)
        {
            cout<<"You have won"<<endl<<endl;
        }
        else
        {
            cout<<"You have lost,try again"<<endl;
            cout<<"Random number was="<<randomNumber<<endl<<endl;
        }
    }
    getch();
}
