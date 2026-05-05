#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > docMatran(int n, int m){
    vector< vector<int> > matran;

    for(int i=0; i<n; i++){
        vector<int> motHang;
        for(int j=0; j<m; j++){
            int temp1;
            cin >> temp1;
            motHang.push_back(temp1);
        }
        matran.push_back(motHang);
    }

    return matran;
}

vector< vector<int> > nhanMaTran(vector< vector<int> > matran1, vector< vector<int> > matran2){
    if(matran1.at(0).size() != matran2.size()){
        // cout << "hello" << endl;
        return {};
    }
    int n = matran1.size();
    int m = matran1.at(0).size();
    int p = matran2.at(0).size();

    vector< vector<int> > matran3;
    for(int i=0; i<n; i++){
        vector<int> motHang_i;
        for(int j=0; j<p; j++){
            int a_i_j = 0;
            for(int k=0; k<m; k++){
                // Tổng (k=0->m) ( matran1[i][k]*matran2[k][j]
                a_i_j = a_i_j + matran1[i][k]*matran2[k][j];
            }
            motHang_i.push_back(a_i_j);
        }
        matran3.push_back(motHang_i);
    }
    return matran3;
}

void inra(vector< vector<int> > matran){
    for(int i=0; i<matran.size(); i++){
        for(int j=0; j<matran.at(i).size(); j++){
            cout << matran[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m, p;
    cin >> n >> m >> p;

    vector< vector<int> > matran_nm= docMatran(n, m);
    vector< vector<int> > matran_mp= docMatran(m, p);


    vector< vector<int> > matran3 = nhanMaTran(matran_nm, matran_mp);

    inra(matran3);
}
