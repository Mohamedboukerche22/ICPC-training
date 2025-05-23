#include <bits/stdc++.h>
using namespace std;
void count(int n ,int i){
    if(i<=n)return;
    else{
        cout<<" "<<i-1;
    }count(n,i-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout<<n;
    count(1,n);
    

    return 0;
}
