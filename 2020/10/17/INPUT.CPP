#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string A;
void solve11(){
    unsigned long length,i=length=A.size();
    while (i>0){
        if ((A[i]=='1')&&(A[i-1]=='1')){
                A[i-1]=A[i]='0';
                if (i-2<0){
                    i=0;
                }else{
                    i-=2;
                }
                cout<<A<<"\n";
        }else{
            i--;
        }
    }
}
void solve010(){
    unsigned long length,i=length=A.size();
    while (i>1){
        if ((A[i]=='0')&&(A[i-1]=='1')&&(A[i-2]=='0')){
            A[i-1]='0';
            if (i-3<0){
                i=0;
            }else{
                i-=3;
            }
            cout<<A<<"\n";
        }else{
            i--;
        }
    }
}
int main(){
    /*freopen("INPUT.INP","r",stdin);
    freopen("INPUT.OUT","w",stdout);*/
    cin>>A;
    solve11();
    solve010();
}
