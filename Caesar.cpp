#include <iostream>
#include <string>
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
              
                int newPosition = j - numberOfPositions;
                if (newPosition < 0)
                {
                    newPosition += alf.size();
                }
                str += alf[newPosition];
       
            }   
        }
    }
    return str;
}
int main(){
    string text = "The quick brown fox jumps over the lazy dog";
    string textlower = "";
    for (char c : text)
    {
        textlower += tolower(c);
    }
    string alf = "abcdefghijklmnopqrstuvwxyz";
    int numberOfPositions;
    cout << "Enter number of positions: ";
    cin >> numberOfPositions;
    string cipher = encrypt_caesar(textlower,alf,numberOfPositions);
    string deciper = decrypt_caesar(cipher, numberOfPositions, alf);
    cout << cipher<< endl << deciper;
    return 0;
}