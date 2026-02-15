#include<iostream>
#include<vector>
#include<string>
#include<limits>
using namespace std;
class book{
    public:
          int id;
          string bTitle;
          string authorName;

          void display(){
            cout<<"ID:"<<id
            <<"\nEnter name of Book : "<<bTitle
            <<"\nEnter Author name: "<<authorName<<endl;
          }       
};
//to add books in the library
vector<book> library; 
void Add_Book(){
            book b;
            cout<<"Enter Book ID: ";    //enter book id
            cin>>b.id;
            cin.ignore();
            cout<<"Enter Book Title: ";  //enter book title
            getline(cin,b.bTitle);
            cout<<"Enter Author Name: ";
            getline(cin,b.authorName);

            library.push_back(b);
            cout<<"Book added successfully\n";
}
//to display all the books in the library
void displayBooks(){
    if(library.empty()){
        cout<<"No books in the library yet./n";
    }else{
        for(auto b:library){
            b.display();
        }
    }
}
//to search for the book by its title.
void Search(string Value , bool byAuthor){
    bool found = false;

    for(auto b:library){
        if(byAuthor){//search by author name
            if(b.authorName==Value){
                b.display();
                found = true;
            }    
        }else{//search by book name
                if(b.bTitle == Value){
                    b.display();
                    found = true;
                }   
        }
    }
    if(!found){
        cout<<"\n No Book such Found.\n";
    }
}

int main(){
    int n;
    do{
        cout<<"Enter number to perform operations:\n1.ADD BOOK\n2.DISPLAY BOOKS\n3.SEARCH BOOK\n4.EXIT\n";
        
        if (!(cin >> n)) {
            cout << "Invalid input! Please enter a number (1-4)." << endl;
            
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the bad input
            continue;    // Restart the loop
        }

        if(n==1){
            Add_Book();
        }else if(n==2){
            displayBooks();
        }else if(n==3){
            string bnm , anm ;
            int x;
            cout<<"\n1.Search by author name\n2.Search by Book name\n";
            cin>>x;
            if(x==1){
                cin.ignore();
                cout<<"Enter Author Name: ";
                getline(cin,anm);
                Search(anm,true);
            }else{
                cin.ignore();
                cout<<"Enter Book Name:";
                getline(cin,bnm);
                Search(bnm,false);
            }
        }
    }while(n != 4);
    return 0;
}