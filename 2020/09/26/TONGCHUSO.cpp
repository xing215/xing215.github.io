#include <iostream>
#include <fstream>
using namespace std;
unsigned int charSum(unsigned long n){
    unsigned int Sum = 0;
    while (n != 0){
        Sum += (n%10);
        n /= 10;
    }
    return Sum;
}
unsigned short charCount(unsigned long n){
    unsigned short Count = 0;
    while (n != 0){
        Count++;
        n /= 10;
    }
    return Count;
}
int main(){
    freopen("TONGCHUSO.INP","r",stdin);
    freopen("TONGCHUSO.OUT","w",stdout);
    unsigned long n;
    unsigned short counting = 0;
    cin>>n;
    cout<<charCount(n)<<"\n"<<charSum(n);
}
