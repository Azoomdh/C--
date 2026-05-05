#include<bits/stdc++.h>

using namespace std;

vector<long int> readVector(int n){
    vector<long int> a;
    for(int i=0; i<n; i++){
        long int temp;
        cin >> temp;
        a.push_back(temp);
    }
    return a;
}


void xuLy(){
    int n, m;
    cin >> n >> m;

    vector<long int> a= readVector(n);
    vector<long int> b= readVector(m);

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    cout << a.back()*b.front() << endl;
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
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6
1 4 2 3 10 2
4 2 6 5 2 9
*/
