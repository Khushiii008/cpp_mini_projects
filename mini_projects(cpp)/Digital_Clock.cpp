#include<iostream>
#include<ctime>
using namespace std;
int main(){
    time_t now=time(nullptr); // to get current time
    char* dt = ctime(&now);
    cout<<"Current Time is:\n"<<dt; // DAY,MONTH,DATE,TIME,YEAR
}