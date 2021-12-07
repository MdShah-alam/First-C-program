#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your letter :";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout<<"vowel";
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"vowel";
    else
        cout<<"consonant";
    getch();

}
