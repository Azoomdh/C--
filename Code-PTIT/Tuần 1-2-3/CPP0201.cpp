#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    long int n;
    vector<long int> a;

    cin >> n;

    for(long int i=0; i<n; i++){
        long int temp;
        cin >> temp;
        a.push_back(temp);
    }

    std::sort(a.begin(), a.end());

    long int hieuMin= a[a.size()-1] -a[0] ;

    for(long int i=0; i<a.size()-1; i++ ){
        long int temp2 = a[i+1]-a[i];
        if(temp2< hieuMin ){
            hieuMin = temp2;
        }
    }

    cout << hieuMin << endl;
}

int main(){
    int sobotest;
    cin>> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
