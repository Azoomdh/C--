#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, x;
    cin >> n >> x;
//    cout << "x : " << x << endl;
    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    std::sort(vectorA.begin(), vectorA.end());

//    for(int a : vectorA){
//        cout << a << " ";
//    }
//    cout << endl;

    auto iter1 = std::upper_bound(vectorA.begin(), vectorA.end(), x);
//    cout << "*(iter1-1)=" << *(iter1-1) << endl;
    if((iter1-1)!=vectorA.end() && *(iter1-1)==x ){
        cout << "1" << endl;
    }
    else {
        cout << "-1" << endl;
    }
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
5  16
9  7  2  16  4
7  98
1  22  57  47  34  18  66
*/
