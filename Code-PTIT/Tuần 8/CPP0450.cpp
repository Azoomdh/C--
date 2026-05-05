#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }
    bool tiepTucChayVongLap = true;
    int phanTuDauTienLapLai = -1;

    for(int i=1; i<=vectorA.size()-1; i++ ){
        if(tiepTucChayVongLap==false){
            break;
        }

        for(int j=0; j<i; j++){
            if(tiepTucChayVongLap==false){
                break;
            }

            if(vectorA[i]==vectorA[j] ){
                phanTuDauTienLapLai = vectorA[i];
                tiepTucChayVongLap = false;
            }
        }
    }

    cout << phanTuDauTienLapLai << endl;
}

int main(){
    int sotest;
    cin >> sotest;

    while(sotest-- >0){
        xuLy();
    }
}

/*
2
5
4 5 1 2 1
6
10 20 30 30 20 5 7
*/
