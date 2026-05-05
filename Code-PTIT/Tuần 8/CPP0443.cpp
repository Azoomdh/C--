#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<int> vectorA;
    for(int i=0; i<n-1; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    std::sort(vectorA.begin(), vectorA.end());

    int soNhoNhatConThieu = n;
    for(int i=1; i<=n-1; i++){
        if(vectorA[i-1]!=i){
            soNhoNhatConThieu = i;
            break;
        }
    }

    cout << soNhoNhatConThieu << endl;
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
1 2 3 5
10
1 2 3 4 5 6 7 8 10
*/
