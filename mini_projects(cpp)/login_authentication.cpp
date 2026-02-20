#include<iostream>
using namespace std;
int main(){
    string storedUsername = "Lucifer";      //stored username
    string storedPassword = "lucifer1234";      //stored password
    string name , pswd;
    do{
        cout<<"\nEnter username : "; //to input username
        cin>>name;
        cout<<"Enter password : "; //to input password
        cin>>pswd;

        if(name == storedUsername && pswd == storedPassword){
            cout<<"LogIn Successfull";
        }else if(name != storedUsername){
            cout<<"Incorrect Username.Try again!";
        }else{
            cout<<"Incorrect Password.Try again!";
        }
    }while(name != storedUsername || pswd != storedPassword);
     return 0;
}