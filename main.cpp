#include <cmath>
#include <iostream>
using namespace std;

const int PRIME_CONST = 31;

long long hashFunction(string key) {
    long long hashCode = 0;
    for (int i = 0; i < key.length(); i++) {
        hashCode += key[i] * pow(PRIME_CONST, i);
    }
    return hashCode;
}

int main() {
    string key;
    cout << "Enter word:";
    getline(cin,key);
    while (key.length()>1) {
      cout << key << " map to ";
      cout << hashFunction(key) << endl;
      cout << "Enter word:";
      getline(cin,key);
    }
    return 0;
}
