
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
string encrypt_caesar(string text, string alf, int numberOfPositions)
{
    string str  = "";
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
                {
                    str+=" ";
                }
        for (int j  = 0; j < alf.size(); j++)
        {
            
            
            if (text[i] == alf[j])
            {
                if (text[i] == alf[j])
                {

                    int newPosition = j + numberOfPositions;
                    if (newPosition < 0)
                    {
                        newPosition += alf.size();
                    }
                    str += alf[newPosition];
                
                }   
            }   
string encrypt_caesar(string text, string alf, int numberOfPositions) {
    string str = "";
    for (int i = 0; i < text.size(); i++) {
        if (!isalpha(text[i])) {
            str += text[i];
            continue;
        }
        for (int j = 0; j < alf.size(); j++) {
            if (text[i] == alf[j]) {
                int newPosition = j + numberOfPositions;
                if (newPosition < 0) {
                    newPosition += alf.size();
                } else if (newPosition >= alf.size()) {
                    newPosition %= alf.size();
                }
                str += alf[newPosition];
                break;
            }
        }
        
    }
    return str;
}
string decrypt_caesar(string cipher, int numberOfPositions, string alf)
{
    string str  = "";
    for (int i = 0; i < cipher.size(); i++)
    {
        if (cipher[i] == ' ')
            {
                 str+=" ";
            }
        for (int j  = 0; j < alf.size(); j++)
        {
            
            if (cipher[i] == alf[j])
            {
              

string decrypt_caesar(string cipher, int numberOfPositions, string alf) {
    string str = "";
    for (int i = 0; i < cipher.size(); i++) {
        if (!isalpha(cipher[i])) {
            str += cipher[i];
            continue;
        }
        for (int j = 0; j < alf.size(); j++) {
            if (cipher[i] == alf[j]) {
                int newPosition = j - numberOfPositions;
                if (newPosition < 0)
                {
                if (newPosition < 0) {
                    newPosition += alf.size();
                } else if (newPosition >= alf.size()) {
                    newPosition %= alf.size();
                }
                str += alf[newPosition];
       
            }   
                break;
            }
        }
    }
    return str;
}
int main(){
    string text = "The quick brown fox jumps over the lazy dog";

int main() {
    string text = "Lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Ut enim ad minim veniam quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur Excepteur sint occaecat cupidatat non proident sunt in culpa qui officia deserunt mollit anim id est laborum";
    string textlower = "";
    for (char c : text)
    {
    for (char c : text) {
        textlower += tolower(c);
    }
    string alf = "abcdefghijklmnopqrstuvwxyz";
    int numberOfPositions;
    cout << "Enter number of positions: ";
    cin >> numberOfPositions;
    string cipher = encrypt_caesar(textlower,alf,numberOfPositions);
    string deciper = decrypt_caesar(cipher, numberOfPositions, alf);
    cout << cipher<< endl << deciper;
    string cipher = encrypt_caesar(textlower, alf, numberOfPositions);
    string decipher = decrypt_caesar(cipher, numberOfPositions, alf);
    cout << cipher << endl<< decipher;
    return 0;
}