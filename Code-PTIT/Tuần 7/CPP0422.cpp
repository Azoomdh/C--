#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    int soLuongZero=0;
    vector<long long int> vectorA;
    for(int i=0; i<n; i++){
        long long int temp;
        cin >> temp;

        if(temp==0){
            soLuongZero++;
        }
        else {
            vectorA.push_back(temp);
        }
    }

    //std::sort(vectorA.begin(), vectorA.end());

    for(int i=0; i<soLuongZero; i++){
        vectorA.push_back(0);
    }

    for(int i=0; i<vectorA.size(); i++){
        cout << vectorA.at(i) << " ";
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
7
1  2 0  0  0  3  6
6
0  1  0  2  0  3
*/
