#include <iostream>
#include <fstream>
using namespace std;
unsigned long long uocSum(unsigned long n){
    unsigned long long Sum=0;
    for (unsigned long i=2; i<=(n/2); i++){
        if (n%i == 0){
            Sum += i;
        }
    }
    return Sum;
}
bool isRich(unsigned long n){
    if (uocSum(n) > n){
        return true;
    }else{
        return false;
    }
}
unsigned short richCount(unsigned int L,unsigned int R){
    unsigned short counting;
    for (L; L<=R; L++){
        if (isRich(L)){
            counting++;
        }
    }
    return counting;
}
void richPrint(unsigned long L,unsigned int R){
    for (L; L<=R; L++){
        if (isRich(L)){
            cout<<L<<" ";
        }
    }
}
int main(){
    freopen("SOGIAUCO.INP","r",stdin);
    freopen("SOGIAUCO.OUT","w",stdout);
    unsigned long L,R;
    cin>>L>>R;
    cout<<richCount(L,R)<<"\n";
    richPrint(L,R);
}
