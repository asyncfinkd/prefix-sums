#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m, x, k, y, a[1000001]; cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>k;
        a[i]=a[i-1]+k;
    }
    
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }
    
    return 0;
}
