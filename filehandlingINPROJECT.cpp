#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream hassan;
    hassan.open("NAMESofSERIES.txt", ios::in);
    string gao;
    getline(hassan, gao);
    cout<<gao;
}