#include <iostream>
#include <string.h>

using namespace std;


//program that finds a XOR encryption key based on the input and the output (in dec)
int main(){
	unsigned int *in, *out;

	int bytes;

	cin >> bytes;

	in = new unsigned int[bytes];
	out = new unsigned int[bytes];

	for(int i = 0; i < bytes; i++){
		cout << "In:";
		cin>>in[i];
	}

	for(int i = 0; i < bytes; i++){
		cout << "Out:";
		cin>>out[i];
	}

	for(int i = 0; i < bytes; i++){
		cout << (char)(out[i] ^ in[i]) << " ";
	}

}
