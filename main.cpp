#include <iostream>
#include <string>
using namespace std;

const int PRIME_CONST = 31;
const int HASH_TABLE_SIZE = 250;

long long hashFunction(const string& key) {
    long long hashCode = 0;
    long long power = 1; // Efficiently handle powers of PRIME_CONST
    for (char ch : key) {
        hashCode += ch * power;
        power *= PRIME_CONST;
    }
    return hashCode;
}

int main() {
    string key;
    cout << "Enter word (or 'quit' to exit): ";
    while (getline(cin, key) && key != "quit") {
        long long hashValue = hashFunction(key);
        int index = hashValue % HASH_TABLE_SIZE;
        cout << "Word \"" << key << "\" maps to index: " << index << endl;
        cout << "Enter word (or 'quit' to exit): ";
    }
    return 0;
}
