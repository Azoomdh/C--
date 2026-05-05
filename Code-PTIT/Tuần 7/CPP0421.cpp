#include<bits/stdc++.h>

using namespace std;

vector<int> readVector(int n){
    vector<int> vectorA ;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        vectorA.push_back(temp);
    }

    return vectorA;
}

void traoDoi(vector<int>& vectorA, int i, int j){
    int temp1 = vectorA.at(i);
    int temp2 = vectorA.at(j);

    vectorA.at(i)=temp2;
    vectorA.at(j)=temp1;
}

void xuLy(){
    int n;
    cin >> n;

    vector<int> vectorA = readVector(n);

    sort(vectorA.begin(), vectorA.end());

    bool isStart = true;

    //while(isStart==true){
        //isStart = false;
        for(int i=0; i<vectorA.size(); i++){
            int temp = vectorA.at(i);
            if(temp==i){
                continue;
            }
            else if(temp >= vectorA.size()) {
                continue;
            }
            else if(temp <0){
                continue;
            }
            else {
                traoDoi(vectorA, i, temp);
                isStart =true;
            }
        }
    //}

    vector<int> vectorB;
    for(int i=0; i<vectorA.size(); i++){
        if(vectorA.at(i)!=i){
            vectorB.push_back(-1);
        }
        else{
            vectorB.push_back(i);
        }
    }

    for(int i=0; i<vectorB.size(); i++){
        cout << vectorB.at(i) << " " ;
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
10
-1 -1 6 1 9 3 2 -1 4 -1
6
0  -3  1  -2  3 - 4
*/
