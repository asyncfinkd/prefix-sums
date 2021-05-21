#include <bits/stdc++.h>
using namespace std;

class Prefix {
    private:
        int a[1000001];
        int y;
        int x;
        int k;
        int n;
        int m;
    
    public:
    void fetchNumber(int x) {
        this->x=x;
    }
    
    void setPrefix(int y, int x) {
        cout<<a[y]-a[x-1]<<endl;
    }
    
    void getNumbers() {
        fetchNumber(x);
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>k;
            a[i]=a[i-1]+k;
        }
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            setPrefix(y,x);
        }
    }

};

int main() {
    Prefix pr;
    pr.getNumbers();
    
    return 0;
}
