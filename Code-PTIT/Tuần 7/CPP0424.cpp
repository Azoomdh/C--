#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int k, n;
    cin >> k >> n;

    vector<int> vectorA;
    for(int i=0; i<k*n; i++){
        int temp;
        cin >> temp;
        vectorA.push_back(temp);
    }

    std::sort(vectorA.begin(), vectorA.end());

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
1
3 4
1 3 5 7
2 4 6 8
0 9 10 11
*/
