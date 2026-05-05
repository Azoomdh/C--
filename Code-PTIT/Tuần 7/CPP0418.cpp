#include<bits/stdc++.h>

using namespace std;

set<int> readSet(int n){
    set<int> setA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        setA.insert(temp);
    }
    return setA;
}

void xuLy(){
    int a, b;
    cin >> a >> b;

    set<int> setA = readSet(a);
    set<int> setB = readSet(b);

    set<int> setC;
    for(int a : setA){
        if(1==1){
            setC.insert(a);
        }
    }
    for(int b : setB){
        if(1==1){
            setC.insert(b);
        }
    }

    set<int> setD;
    for(int a : setA){
        if(setB.count(a)!=0){
            setD.insert(a);
        }
    }



    for(int c : setC){
        cout << c << " ";
    }
    cout << endl;

    for(int d : setD){
        cout << d << " ";
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
5 3
1 2 3 4 5
1 2 3
*/
