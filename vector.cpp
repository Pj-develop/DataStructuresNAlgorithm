// You are using GCC
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
            }
    sort(data.begin(),data.end());
    for (int i = 0; i < n; i++) {
        cout << data[i]<<" ";
            }
    return 0;
}
