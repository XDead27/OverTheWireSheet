#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector<int> xor_encrypt(char in[], char key[]) {
    vector<int> outText;

    // Iterate through each character
    for(int i=0; i<strlen(in); i++) {
      outText.push_back(in[i] ^ key[i % strlen(key)]);
    }

    return outText;
}

int main(){
  char a[100];

  cin >> a;

  vector<int> v = xor_encrypt(a, "qw8J");

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  return 0;
}
