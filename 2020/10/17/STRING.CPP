#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string A;
unsigned long long k;
unsigned short kFix(unsigned long long k, unsigned short length){
    while (k>length){
        k -= length;
    }
    return k+1;
}
void valueOutput(unsigned long long k, string A){
    unsigned short kShort = kFix(k,A.size());
    for (unsigned short i=kShort; i<A.size(); i++){
        cout<<A[i];
    }
    for (unsigned short i=0; i<kShort; i++){
        cout<<A[i];
    }
}
int main(){
    freopen("STRING.INP","r",stdin);
    freopen("STRING.OUT","w",stdout);
    cin>>k>>A;
    valueOutput(k,A);
}
