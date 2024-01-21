#include <iostream>
#include<stdio.h>
#include<conio.h>
#define clrscr() system("cls")
using namespace std;

class Bank
{
    int amount;

public:
    Bank()
    {
        amount = 0;
    }
    void deposit(int amt);
    void withdraw(int amt);
    void balance();
};

void Bank::deposit(int amt)
{
     if (amt < 0)
    {
        cout << "Invalid amount for deposit\n";
    }
    else
    {
        amount += amt;
        cout << "Deposit successful\n";
    }
}
void Bank::withdraw(int amt)
{
    if (amt < 0 || amt > amount)
    {
        cout << "Invalid amount for withdrawal\n";
    }
    else
    {
        amount -= amt;
        cout << "Withdrawal successful\n";
    }
}
void Bank::balance()
{
    cout << "Your Current balance is:" << amount;
}

int main()
{
    char ch1,ch2,ch3,ch4;
    int count=4;
    clrscr();
    while(count != 0){
        cout<<"\nEnter PIN:";
        ch1=getch();
        cout<<"*";   
        ch2=getch();
        cout<<"*";
        ch3=getch();
        cout<<"*";
        ch4=getch();
        cout<<"*";
        if(ch1 =='9' && ch2 =='0' && ch3 =='1' && ch4 =='2')
        break;
        else{
            count--;
            cout<<"\nInvalid Pin: Only "<<count<<" options remaining";
        }
        if(count == 0){
            cout<<"\nYour account is blocked for 24 hours, Pls contact your Branch";
        }
    }
    if(ch1 =='9' && ch2 =='0' && ch3 =='1' && ch4 =='2'){
        int choice;
        int myamt;
        Bank B;
        clrscr();
        do
        {
            cout << "\n--------------Bank Application---------------";
            cout << "\n1.Deposit";
            cout << "\n2.Withdraw";
            cout << "\n3.Check Balance";
            cout << "\n4 Exit";
            cout << "\n-----------------------------------";
            cout << "\nEnter Your Choice:";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                cout << "\nEnter amount for deposit:";
                cin >> myamt;
                B.deposit(myamt);
                break;
            }
            case 2:
            {
                cout << "\nEnter amount for withdrawal:";
                cin >> myamt;
                B.withdraw(myamt);
                break;
            }
            case 3:
            {
                B.balance();
            }
            }
        } 
        while (choice != 4);
    }
    else{
        cout<<"Incorrect Pin";
    }
}