#include <iostream>

using namespace std;
string username = "Student";
int password = 123;
double balance = 5000.00;
int option;
int deposit;
int withdraw;
int sent;
int money1;
int amount2;
int amount3;
string name;


void welcome()
{
    cout << "WELCOME TO STUDENTS BANK"<<endl;
}
bool login()
{
    cout << "Enter your username : ";
    cin >> username;
    cout << "Enter your password : ";
    cin >> password;
    if(username == "Student" && password == 123)
    {
    cout << "You have logged in successfully"<<endl<<endl;
    return true;
    }

    else{
  cout<<"Invalid credentials, please try again."<<endl;
    for(int i = 0; i < 3; i++)
  return false;
}
}
void checkBalance()
{
    cout<<"Account Name: "<<username<<endl;
    balance = 5000.00;
    cout << "YOUR CURRENT BALANCE IS R"<<balance<<endl;
}
void mainMenu()
{
    cout<<"Account Name: "<<username<<endl;
    cout << "ENTER 1 IF YOU WANT TO CHECK BALANCE"<<endl;
    cout << "ENTER 2 IF YOU WANT TO DEPOSIT MONEY"<<endl;
    cout << "ENTER 3 IF YOU WANT TO WITHDRAW MONEY"<<endl;
    cout << "ENTER 4 IF YOU WANT SEND MONEY"<<endl;
    cout << "ENTER 5 IF YOU WANT TO EXIT THE SYSTEM"<<endl;
    cin >> option;
}
void depositMoney()
{
    cout << "ENTER THE AMOUNT YOU WISH TO DEPOSIT :R "<<endl;
    cin >>amount2;
    deposit = balance + amount2;
    cout<<"Deposited R"<<amount2<<" "<<"NEW BALANCE IS R"<<deposit <<endl;
}
void withdrawal()
{
    cout << "ENTER THE WITHDRAWAL AMOUNT :R "<<endl;
    cin >> amount3;
    withdraw = balance - amount3;
    cout << "WITHDRAWAL SUCCESSFUL"<<endl;
    cout << "WITDRAWAL MADE : R"<<amount3<< ".NEW BALANCE IS R"<<withdraw<<endl;
}

void sendMoney()
{
   cout<<"ENTER THE AMOUNT YOU WANT TO SEND: "<<endl;
   cin>>sent;
   cout<<"Enter the account you are sending to: "<<endl;
   cin>>name;
   money1 = balance - sent;
   cout<<"Amount sent : R"<<sent<<endl;
   cout<<"Sent to "<<name<<" "<<"NEW BALANCE IS :R"<<money1<<endl;
}

void exit()
{
    cout << "THANK YOU FOR USING OUR BANKING SYSTEM"<<endl;
}
int main()
{
    welcome();
    if(login()){
     mainMenu();


switch (option) {
case 1:
    checkBalance();
    break;

case 2:
    depositMoney();
    break;

case 3:
    withdrawal();
    break;

case 4:
    sendMoney();
    break;

case 5:
    exit();
    break;

default:
    cout << "INVALID INPUT!!!!" <<endl;
    break;
    }
    }
    return 0;
}
