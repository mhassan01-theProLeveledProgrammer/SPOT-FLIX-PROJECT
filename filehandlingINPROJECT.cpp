#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream hassan;
    hassan.open("hassanProject.txt",ios::out);
    hassan<<"THIS FILE IS ACTING AS A SOURCE FILE TO MANAGE OUR PROJECT ";
    hassan.open("abc", ios::in);
    if (hassan)
    {
        cout<<" FILE IS NOT PRESENT IN THE FOLDER WHERE YOUR PROGRAM IS SAVED "<<endl;
    }
    else
    {
        cout<<" FILE FOUND "<<endl;
        while(1)
        {
            char x;
            while (1)
            {
                if (hassan.eof())
                {
                    break;
                }
                cout<<x;
            }
        }
    }
    hassan.close();   
}