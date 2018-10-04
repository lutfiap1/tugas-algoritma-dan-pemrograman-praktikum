#include <iostream>
using namespace std;

int main(){
    int angka;
    
    cout<<"masukkan angka : "; cin>>angka;
    cout<<endl;
    //seleksi pembandingan AND, kedua kondisi harus bernilai benar
    if ((angka > 0) && (angka < 10)){
    cout<<"Anda memasukkan angka antara 1 sampai 9"; } else {
        cout<<"Yang Anda masukan bukan antara 1 sampai 9";
    }
}