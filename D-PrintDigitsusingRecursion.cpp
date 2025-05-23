#include <bits/stdc++.h>
using namespace std;
#define str string
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >>n;
    vector<str>lol(n);
    for(str &i:lol)cin >>i;
    for(str s :lol){
        for(int i=0;i<s.length();i++){
            cout<<s[i]<<' ';
        }
        cout<<"\n";
    }
    

    return 0;
}
