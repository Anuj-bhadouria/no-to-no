#include<iostream>
using namespace std;

int main(){

    int decimalnumber=156 , rem;

    while(decimalnumber > 0 ){
        rem =decimalnumber % 8;
        decimalnumber /=8;
        cout<<rem;
    }
    cout<<endl;

return 0;


}