#include <bits/stdc++.h>
using namespace std;
void count(int n ,int i){
    if(i>n)return;
    else cout <<i<<"\n";
    count(n,i+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    count(n,1);
    

    return 0;
}
