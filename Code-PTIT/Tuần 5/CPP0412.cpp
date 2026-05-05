#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<int> a;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    std::sort(a.begin(), a.end());

    for(int i=0; i<a.size(); i++){
        cout << a.at(i) << " ";
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
5
0 2 1 2 0
3
0 1 0
*/
