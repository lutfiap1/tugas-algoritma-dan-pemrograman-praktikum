#include <iostream>
using namespace std;

int main(){
	
	char huruf;
	cout<<"masukkan huruf kecil :";
	cin>>huruf;
	
	if (huruf == 'a' | huruf == 'i' | huruf == 'u' | huruf == 'e' | huruf == 'o' ){ 
		cout<<"anda memasukkan huruf vokal";
	} else {
		cout<<"yang anda masukkan adalah huruf konsonan";
	}
}
