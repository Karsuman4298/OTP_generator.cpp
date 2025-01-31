#include<bits/stdc++.h>

using namespace std;

string genOTP(int len) {

    string str ="1234567890abhhgjhgcj";
    int n = str.length();

    string OTP;

    for(int i=0;i<len;i++) {
        OTP.push_back(str[rand()%n]);
    }
    return OTP;
}

int main() {
srand(time(NULL));

  int len=6;
    cout<<"YOUR OTP IS :\n"<<genOTP(len).c_str();

}