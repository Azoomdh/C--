// function template
#include<iostream>
using namespace std;

class Student {
    private :
        string name;
    public :
        Student(string name) {
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setName(string name){
            this->name = name;
        }
};

int main () { 
    string str ("Test string");
    for ( string::iterator it=str.begin(); it!=str.end(); ++it) {
        cout << *it;
    }
    cout << '\n';
}