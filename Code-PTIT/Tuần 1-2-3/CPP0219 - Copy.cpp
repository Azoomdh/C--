#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, m;
    cin >> n >> m;

    vector< vector<int> > a;

    for(int i=0; i<n; i++){
        vector<int> a_motHang;
        for(int j=0; j<m; j++){
            int temp;
            cin >> temp;
            a_motHang.push_back(temp);
        }
        a.push_back(a_motHang);
    }

    vector< vector<int> > a_v2 ;
    for(int i=0; i<n; i++){
        vector<int> a_motHang;
        for(int j=0; j<m; j++){
            a_motHang.push_back(0);
        }
        a_v2.push_back(a_motHang);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==1){
                for(int k=0; k<n; k++){
                    a_v2[k][j]=1;
                }
                for(int l=0; l<m; l++){
                    a_v2[i][l]=1;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a_v2[i][j] << " ";
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
