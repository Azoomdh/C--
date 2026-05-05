#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a[i]= temp;
    }

    int chiSoPhanTuMax=0;
    for(int i=1; i<n; i++){
        if(a[chiSoPhanTuMax]<a[i]){
            chiSoPhanTuMax=i;
        }
    }

    cout << "chi so phan tu max la : " << chiSoPhanTuMax << " giá trị là : " << a[chiSoPhanTuMax] << endl;
}
