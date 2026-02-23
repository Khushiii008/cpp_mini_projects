#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a , b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;     //input two operands

    char op;
    cout<<"Enter operator(+ , - , * , / , %) : ";
    cin>>op;    //input operator

    switch(op){
        case '+' : 
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-' : 
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*' : 
            cout << a << " * " << b << " = " << a * b << endl;
            break;    
        case '/' : 
            if (b != 0) {
                cout << a << " / " << b << " = " << a / b << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default :
            cout << "Error! The operator is not correct or supported." << endl;
            break;    
    }
    return 0;
}