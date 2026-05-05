// đây là file sai

#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, k;
    cin >> n >> k;

    vector<int> a;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    std::sort(a.begin(), a.end());

    cout << a[k-1] << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
