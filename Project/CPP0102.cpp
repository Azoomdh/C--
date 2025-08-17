#include<iostream>

using namespace std;

char chuyenDoi(char c){
    if(c >='a' && c<='z'){
        c = c- 'a'+ 'A';
    }
    else if (c >= 'A' && c <= 'Z'){
        c = c- 'A'+ 'a';
    }
    else {
        c= c;
    }

    return c;
}

int main(){
    int sobotest=0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        char c;
        cin >> c;

        cout << chuyenDoi(c) << endl;
    }
}
