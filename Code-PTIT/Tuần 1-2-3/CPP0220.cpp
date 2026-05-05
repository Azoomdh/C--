#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector< vector<int> > a;

    for(int i=0; i<n; i++){
        vector<int> motHang;
        for(int j=0; j<n; j++){
            int temp;
            cin >> temp;

            motHang.push_back(temp);
        }
        a.push_back(motHang);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n-1 || i==0 || j==n-1 || j==0){
                cout << a[i][j] << " ";
            }
            else {
                cout << " " << " ";
            }
        }
        cout << endl;
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
