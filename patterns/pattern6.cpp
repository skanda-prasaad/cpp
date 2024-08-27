#include<bits/stdc++.h>
using namespace std;

void print6(int n){
    for(int i=0; i < n;i++){
        for(int sp = 0; sp < n-i-1; sp++){
            cout << " ";
        }
        for(int j = 0; j <(2*i) + 1; j++){
            cout << "*";
        }
        for(int sp = 0; sp < n-i-1; sp++){
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    print6(n);
}