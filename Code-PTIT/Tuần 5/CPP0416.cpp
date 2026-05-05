#include<bits/stdc++.h>

using namespace std;

vector<int> readVector(int n){
    vector<int> a;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    return a;
}

void xuLy(){
    int n, k;
    cin >> n >> k;

    vector<int> a = readVector(n);

    std::sort(a.begin(), a.end());

    int soCapThoaMan = 0;

    for(int i=0; i<a.size()-1; i++){
        for(int j=i+1; j<a.size(); j++){
            int sum = a[i]+a[j];
            if(sum==k){
                soCapThoaMan++;
            }
        }
    }
    cout << soCapThoaMan << endl;
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
5 0
1 5 4 1 2
3 2
1 1 1
*/
