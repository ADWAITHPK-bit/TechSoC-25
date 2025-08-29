#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int shift;

    cout << "Enter the text: ";
    getline (cin, text) ;

    cout << "Enter the shift: ";
    cin >> shift;

    shift = shift % 26;  

    string result = "";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            char shifted = ((c - 'a' + shift + 26) % 26) + 'a';
            result += shifted;
        }
        else if (c >= 'A' && c <= 'Z') {
            char shifted = ((c - 'A' + shift + 26) % 26) + 'A';
            result += shifted;
        }
        else {
            result += c;  
        }
    }

    cout << "Encrypted text: " << result << endl;
    return 0;
}
