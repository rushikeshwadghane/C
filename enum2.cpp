#include<iostream>
using namespace std;

int main()
{
    enum Marvellous_Batches {PPA=0,LB=1,Python=2};
    const int Fees[]={15,16,17};
    const float Duration []={3.5,4.5,4};
    int choice;
    cout<<"Enter your choice for batch\n";
    cout<<"0: PPA\n";
    cout<<"1: LB\n";
    cout<<"2: Python\n";

    cin>>choice;

switch (choice)
{
case PPA:
    cout<<"Thank you for selecting Pre-Plcament activity batch\n";
    cout<<"Duratin is : "<<Duration[PPA]<<"\n";
    cout<<"Fees are : "<<Fees[PPA]<<"\n";
    break;
case LB:
    cout<<"Thank you for selecting Logic Building batch\n";
    cout<<"Duratin is : "<<Duration[LB]<<"\n";
    cout<<"Fees are : "<<Fees[LB]<<"\n";
    break;

case Python:
    cout<<"Thank you for selecting Python batch\n";
     cout<<"Duratin is : "<<Duration[Python]<<"\n";
    cout<<"Fees are : "<<Fees[Python]<<"\n";
    break;

default:
    cout<<"Sorry there is no such batch\n";
    cout<<"Contact Admin : \n";
    break;


}


    return 0;
}