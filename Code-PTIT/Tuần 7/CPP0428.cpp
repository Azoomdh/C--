#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, m;
    cin >> n >> m;

    vector<int> vectorA;
    for(int i=0; i<n+m; i++){
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
3 3
10 5 15
20 3 2
*/
