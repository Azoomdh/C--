#include<bits/stdc++.h>

using namespace std;

void inra(vector<int> vectorA){
    cout << "in ra vector : ";
    for(int a : vectorA){
        cout << a << " ";
    }
    cout << endl << endl;
}

void xuLy(){
    int n, k;
    cin >> n >> k;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    std::sort(vectorA.begin(), vectorA.end());

    // cout << endl << endl << "vector A sau khi sort : " << endl;
    // inra(vectorA);


    for(int i=vectorA.size()-1; i>vectorA.size()-k-1; i--){
        cout << vectorA.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int sotest;
    cin >> sotest;

    while(sotest-- >0){
        xuLy();
    }
}

/*
2
5 3
10 7 9 12 6
6 2
9 7 12 8 6 5
*/
