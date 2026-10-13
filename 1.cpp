#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    ofstream out("2.txt",ios::app);
    for(int i=0;i<2;i++)
    {
        cout<<"Enter Your name="<<endl;
        cin>>name;
    
        out<<'\t'<<name;
    }
     return 0;
}