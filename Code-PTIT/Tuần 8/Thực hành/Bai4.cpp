#include<bits/stdc++.h>

using namespace std;

void inXuoi(vector<int> a){
    for(int i=0; i<a.size(); i++ ){
        cout << a[i] << " ";
    }
}

void inNguoc(vector<int> a){
    for(int i=a.size()-1; i>=0; i-- ){
        cout << a[i] << " ";
    }
}

void xuLy(){
    int n;
    cin >> n;

    vector< vector<int> > matrixA;
    for(int i=0; i<n; i++){
        vector<int> motHang;
        for(int j=0; j<n; j++){
            int temp;
            cin >> temp;

            motHang.push_back(temp);
        }
        matrixA.push_back(motHang);
    }

    bool seInXuoi=true;
    for(int i=0; i<matrixA.size(); i++){
        if(seInXuoi==true){
            inXuoi(matrixA.at(i));
        }
        else {
            inNguoc(matrixA.at(i));
        }
        seInXuoi = !seInXuoi;
    }
    cout << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
/*
2
3
45 48 54 21 89 87 70 78 15
2
25 27 23 21
*/
