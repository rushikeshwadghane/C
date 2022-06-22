#include<iostream>

using namespace std;

int main()
{
    int Input=0;    
 
    enum Gender {Female=0, Male=1};
    cout<<"Enter your Gender\n";
    cout<<"0:Female\n";
    cout<<"1:Male\n";
    cin>>Input;
    switch (Input)
    {
    case Female :
        cout<<"Tax limmit is 2,50,000.\n";
        break;
    case Male :
        cout<<"Tax limit is 3,00,000.\n";
        break;
    
    default:
        cout<<"Invalid Gender";
        break;
    }



    return 0;
}