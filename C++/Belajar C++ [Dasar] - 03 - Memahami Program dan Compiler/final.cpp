#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

int main(){
    float celcius;
    
    cout<<"masukan suhu anda:";
    cin>>celcius;

    // convert celcius to farenheit
    cout<<"========= Suhu dalam Farenheit ==========\n";
    float farenheit;
    farenheit=celcius/5*9 + 32;
    cout<<"dalam farenheit:"<<farenheit<<" bertipe data:"<< typeid(farenheit).name();

    cout<<"\n=========== Suhu dalam reamur ==============\n";
    float reamur;
    reamur=celcius*0.8;
    cout<<"dalam farenheit:"<<reamur<<" bertipe data:"<< typeid(reamur).name();

    cout<<"\n======== Suhu dalam kelvin ==========\n";
    float kelvin;
    kelvin=celcius+273.15;
    cout<<"dalam farenheit:"<<kelvin<<" bertipe data:"<< typeid(kelvin).name();
    return 0;
}