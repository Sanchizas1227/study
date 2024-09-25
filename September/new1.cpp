#include <bits/stdc++.h>
using namespace std;

long long powerOfTwo(int n, long long m){
    if(n > 0){
        n --;
        m *= 2;
        powerOfTwo(n, m);
    } else {
        return m;
    }
}
int main(){
    int n;
    long long m = 1;
    cin >> n;
    cout << powerOfTwo(n, m) << endl;
    return 0;
}
