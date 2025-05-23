#include <bits/stdc++.h>
using namespace std;
void printy(int n){
    if(n==0) return;
    cout<<"I love Recursion\n";
    printy(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    printy(n);

    return 0;
}
