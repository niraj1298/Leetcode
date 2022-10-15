#include <iostream>
using namespace std;

char solution(string s) {
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < s.length();j++){
            if(s[i] == s[j] && i != j){ //
                break;
            }
            if(j == s.length()-1){
                return s[i];
            }
        }
    }
    return '_';
}

int main() {
    string s = "abacabad";
    cout << solution(s);
    return 0;
}

