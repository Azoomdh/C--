#include<bits/stdc++.h>

using namespace std;

int randomIntBetweenZeroAndOneMilion(){
    return rand()*rand()/900%1000000;
    // 3*10^4 * 3*10^4 = 9*10^8
    // 9*10^8 / 9*10^2 = 10^6
}

int main(){
    int n;
    cin >> n;
    n= abs(n);

    srand(time(0));

    vector<string> vectorA;
    vector<int> vectorB;
    for(int i=0; i<n; i++){
        int intTemp = randomIntBetweenZeroAndOneMilion();
        char buffer[16];
        snprintf(buffer, sizeof(buffer), "%06d", intTemp);
        string strTemp(buffer);
        
        vectorA.push_back(strTemp);
        vectorB.push_back(intTemp);
    }

    std::sort(vectorA.begin(), vectorA.end());
    std::sort(vectorB.begin(), vectorB.end());

    for(string a : vectorA){
        cout << a << " ";
    }
    cout << endl;

    bool vectorCoSoTrungNhau = false;
    for(int i=0; i<vectorA.size()-1; i++){
        if(vectorA.at(i)==vectorA.at(i+1) ){
            vectorCoSoTrungNhau = true;

            cout << "So trung nhau : " << vectorA.at(i) << endl;
            while(vectorA.at(i)==vectorA.at(i+1)){
                i++;
            }
        }
    }

    if(vectorCoSoTrungNhau==false){
        cout << "Khong co so trung nhau " << endl;
    }

}
