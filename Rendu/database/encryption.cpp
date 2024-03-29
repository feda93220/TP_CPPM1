#include "encryption.hpp"
#include <openssl/sha.h>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>
#include <iomanip>
#include <sstream>

#include <bitset>

using namespace std;

Password::Password(string &password, bool is_encrypted):
    _raw_value(password) {
        if (is_encrypted) {_encrypted_value = password;}
        else {encrypt(password);}
    }

void Password::encrypt(const string &password) {
    string encrypted_password;

    const std::string SECRET = "SECRET";
    
    std::string data = password + SECRET;

    unsigned char hash[SHA256_DIGEST_LENGTH];

    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, data.c_str(), data.size());
    SHA256_Final(hash, &sha256);

    std::stringstream hexstream;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        hexstream << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    encrypted_password = hexstream.str();
    

    
    _encrypted_value = encrypted_password;
}

string Password::str() {
    return _encrypted_value;
}

bool Password::operator==(const string &str) const {
    return str == _encrypted_value;
}

bool Password::operator==(const Password &other) const {
    return _encrypted_value == other._encrypted_value;
}

ostream &operator<<(ostream &os, const Password &p) {
    os << p._encrypted_value;
    return os;
}
