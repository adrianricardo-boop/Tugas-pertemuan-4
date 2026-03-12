#include <iostream>
using namespace std;
int main (){
    // //Laboratorium Ilmu Komputer
    // goto a;
    // b: 
    // cout<<"Ilmu ";
    // goto c;
    // a:
    // cout<<"Laboratorium ";
    // goto b;
    // c:
    // cout<<" Komputer";

    int a = 1;

    x:
    cout << a << " ";
    a++;

    if ( a <= 10){
        goto x;
    }

}