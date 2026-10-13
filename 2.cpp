#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50]={"manoj"};
    ifstream in("2.txt");
    // getline(in,name);
    in>>name;
    cout<<name;
    return 0;
}