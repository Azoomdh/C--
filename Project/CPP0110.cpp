#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    string s;
    cin >> s;

    while(true){
        int vitri = s.find("084");
        if(vitri==-1){
            break;
        }

        s.erase(vitri, 3);
    }

    cout << s << endl;
}

int main(){
    int soLuongTest;
    cin >> soLuongTest;

    for(int i=0; i< soLuongTest; i++){
        xuLy();
    }
}
