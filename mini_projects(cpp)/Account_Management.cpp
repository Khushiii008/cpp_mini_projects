#include<iostream>
#include<limits>
using namespace std;
class Account{
    private:
        double balance = 100000;
    public :
        Account() {
            balance = 100000;
        }
        //to deposit amount
        void deposit(int amount){
            if(amount<=0){
                cout<<"Invalid Amount! "<<amount<<endl;
            }else{
                balance+=amount;
                cout<<"Balance after deposit is "<<balance<<endl;
            }
        }
        //to withdraw amount
        void withdraw(int amount){
            if(amount <= 0){
                cout<<"Invalid Amount!"<<endl;
            }else if(amount > balance){
                cout<<"Insufficient Balance"<<endl;
            }else{
                balance -= amount;
                cout<<"Balance after withdraw is "<<balance<<endl;
            }
        }
        //to check balance
        void display(){
            cout<<"Current Balance : "<<balance<<endl;
        }
};
int main(){
    Account obj;
    int n , amount;
    do{
        cout<<"Enter number to perform operations:\n1.DEPOSIT\n2.WITHDRAW\n3.DISPLAY\n4.EXIT\n";
        
        if (!(cin >> n)) {
            cout << "Invalid input! Please enter a number (1-4)." << endl;
            
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            continue;    // Restart the loop
        }
        if(n==1){
            cout<<"Enter amount to be deposited : "<<endl;
            cin>>amount;
            obj.deposit(amount);
        }else if(n==2){
            cout<<"Enter amount to be withdrawn : "<<endl;
            cin>>amount;
            obj.withdraw(amount);
        }else if(n==3){
            obj.display();
        }
    }while(n != 4);
    cout<<"------Program ended------"<<endl;
    return 0;

}