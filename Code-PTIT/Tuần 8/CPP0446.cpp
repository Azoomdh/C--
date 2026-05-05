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

    int tongMin= vectorA.at(0) + vectorA.at(1);

    for(int i=0; i<vectorA.size()-1; i++){
        for(int j=i+1; j<vectorA.size(); j++){
            int tongTemp = vectorA[i]+vectorA[j];
            if(abs(tongTemp)<abs(tongMin) ){
                tongMin = tongTemp;
            }
        }
    }

    cout << tongMin << endl;
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
-8 -66 -60
6
-21 -67 -37 -18 4 -65
*/
