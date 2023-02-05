#include<iostream>
using namespace std;

int main(){
    int a,b,result=1;
    cout<<"masukan angka:";
    cin>>a;
    cout<<"masukan angka ekponan:";
    cin>>b;
    for (int i=0;i<b;i++){ // ini berfungsi untuk sebanyak nilai b
        result*=a;// result ini kita punya value default sebesar 1 agar dikalikan a tidak keluah dari kelipatan
    }
    cout<<"hasil:"<< result<<endl;

}