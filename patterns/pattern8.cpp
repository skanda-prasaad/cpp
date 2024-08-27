#include<bits/stdc++.h>
using namespace std;

void print8(int n){
    for(int i = 0; i<n; i++){
        for(int spc = 0; spc<i;spc++){
            cout << " ";
        }
        for(int j = 0; j < 2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int spc = 0; spc<= i;spc++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print8(n);
}