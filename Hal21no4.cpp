#include <iostream>
using namespace std;

int main (){

    double s,t,ideal,tinggi;

    cout<<"menghitung berat badan ideal seseorang "<<endl;
    cout<<"=========================="<<endl;
    cout<<"masukan tinggi badan:" ; 
    cin>>tinggi;

    s = tinggi-100;
    t = s * 10 / 100;
    ideal = s - t ;
    cout<<"--------------------------"<<endl;

    cout<<"berat badan ideal ";
    cout<<ideal<<"kg";
    

}