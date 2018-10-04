#include <iostream>
using namespace std;

int main(){
    
    double m,ab,cd,ef;
    double const  y = 0.9144,
                  f = 0.3048,
                  i = 0.0254;
    
    cout<<"konversi"<<endl;
    cout<<"masukan satuan panjang (meter) :";
    cin>>m;
    
    ab = m * y;
    cd = m * f;
    ef = m * i;
    
    cout<<m<<" meter sama dengan, "<<ab<<" yard, "<<cd<<" kaki, "<<ef<<" inchi";
    
    return 0;
    
}
    