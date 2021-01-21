#include <iostream>
#include <fstream>
using namespace std;
unsigned short n,m, A[101], B[101], L[101][101];
void result(){
    bool choose[n+1][m+1][n+1];
    for (unsigned short i=1; i<=n; i++){
        for (unsigned short j=1; j<=m; j++){
            if (B[i]<=j){
                unsigned short r = L[i-1][j-B[i]] + A[i];
                if (r >= (L[i-1][j])){
                    L[i][j] = r;
                    continue;
                }
                L[i][j] = (L[i-1][j]);
                continue;
            }
            L[i][j] = L[i-1][j];
        }
    }
}
int main(){
    freopen("APPLE.INP","r",stdin);
    freopen("APPLE.OUT","w",stdout);
    cin>>n>>m;
    for (unsigned short i=1; i<=n; i++){
        cin>>A[i]>>B[i];
    }
    result();
    cout<<L[n][m];
}
