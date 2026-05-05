#include<bits/stdc++.h>

using namespace std;

struct Point {
    double x;
    double y;
};

void input(Point &a){
    double x, y;
    cin >> x >> y;
    a.x = x;
    a.y = y;
}

double distance(Point a, Point b){
    double deltaX = a.x - b.x;
    double deltaY = a.y - b.y;

    double distance = sqrt( deltaX*deltaX + deltaY*deltaY );
    return distance;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

/*
2
0 0 0 5
0 199 5 6
*/
