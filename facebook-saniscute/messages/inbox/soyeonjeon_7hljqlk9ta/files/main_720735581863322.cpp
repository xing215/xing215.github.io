//ĐỪNG ĐỌC CODE MÒ, CHẠY LUÔN ĐI <3
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <ctime>
using namespace std;
void clrscr(){
    cout<<flush;
    system("CLS");
}
void pause(){
    cout<<flush;
    system("PAUSE");
}
int year(time_t &a){
    int temp = a/31556926;
    a -= 31556926*temp;
    return temp;
}
int month(time_t &a){
    int temp = a/2629743.83;
    a -= 2629743.83*temp;
    return temp;
}
int day(time_t &a){
    int temp = a/86400;
    a-= 86400*temp;
    return temp;
}
int hour(time_t &a){
    int temp = a/3600;
    a -= 3600*temp;
    return temp;
}
int minute(time_t &a){
    int temp = a/60;
    a -= 60*temp;
    return temp;
}
int second(time_t &a){
    return a;
}
int main( )
{
    while (0==0){
        clrscr();
        time_t now = time(0);
        now -= 1595998560;
        cout<<"Chung ta da tro chuyen cung nhau duoc...\n";
        cout<<month(now)<<" thang, "<<day(now)<<" ngay, "<<hour(now)<<" gio, "<<minute(now)<<" phut, "<<second(now)<<" giay.\n";
        usleep(555555);
    }
}
