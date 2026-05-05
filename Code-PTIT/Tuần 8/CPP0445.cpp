#include<bits/stdc++.h>

using namespace std;

void inra(vector<int> vectorA){
    cout << "in ra vector : " ;
    for(int a : vectorA){
        cout << a << " ";
    }
    cout << endl;
}

void xuLy(){
    int n;
    cin >> n;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    // cout << ">> in ra vectorA" << endl;
    // inra(vectorA);
    // cout << endl;

    vector<int> vectorB;
    for(int a : vectorA){
        auto iter1 = find(vectorB.begin(), vectorB.end(), a);
        if(iter1!=vectorB.end() ){
            // doesnt do
        }
        else {
            vectorB.push_back(a);
        }
    }

    // cout << ">> in ra vectorB" << endl;
    // inra(vectorB);
    // cout << endl;

    std::sort(vectorB.begin(), vectorB.end());

    // cout << ">> in ra vectorB da sort" << endl;
    // inra(vectorB);
    // cout << endl;

    if(vectorB.size()<2){
        cout << "-1" << endl;
    }
    else {
        cout << vectorB[0] << " " << vectorB[1] << endl;
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
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1 1 1
*/
