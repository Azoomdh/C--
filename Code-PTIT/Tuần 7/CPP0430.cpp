#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    int a[100001];
    for(int i=0; i<100001; i++){
        a[i]=0;
    }

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
        a[temp]++;
    }

    std::sort(vectorA.begin(), vectorA.end());

    int minA = vectorA[0];
    int maxA = vectorA[vectorA.size()-1];

//    for(int a : vectorA){
//        cout << a << " ";
//    }
//    cout << endl;

    int soLuongSoZero = 0;
    for(int i= minA ; i<=maxA; i++){
//        cout << a[i] << " ";
        if(a[i]==0){
            soLuongSoZero++;
        }
    }
//    cout << endl;
    cout << soLuongSoZero << endl;
}

int main(){
    int soPhanTu;
    cin >> soPhanTu;

    while(soPhanTu-- >0){
        xuLy();
    }
}

/*
2
5
4 5 3 8 6
3
2 1 3
*/
