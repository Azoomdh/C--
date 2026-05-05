#include<bits/stdc++.h>

using namespace std;

string dapAn101 = "ABBADCCABDCCABD";
string dapAn102 = "ACCABCDDBBCDDBB";

void xuLy(){
    string maDe;
    cin >> maDe ;
    string dapAn;
    if(maDe=="101"){
        dapAn = dapAn101;
    }
    else if(maDe=="102"){
        dapAn = dapAn102;
    }
    else {
        dapAn = nullptr;
    }

    double diem =0;
    for(int i=0; i<15; i++){
        char temp;
        cin >> temp;
        if(temp== dapAn[i] ){
            diem = diem + (double)10/15;
        }
    }

    // cout << "aaa " << soCauDung << endl;
    printf("%.2f\n", diem);
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
/*
1
101 A B B A D C C A B D C C A B D
*/
