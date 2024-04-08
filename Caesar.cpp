#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

string encrypt_caesar(string text, string alf, int numberOfPositions) 
{
    string str = "";
    int alphSize = alf.size();
    for (int i = 0; i < text.size(); i++) 
    {
        if (!isalpha(text[i])) 
        {
            str += text[i];
            continue;
        }
        char bukva = text[i];
        char cipherbukva; 
        int index = alf.find(tolower(bukva));
        int newIndex = (index + numberOfPositions % alphSize + alphSize) % alphSize;
        cipherbukva = alf[newIndex];
        if (isupper(bukva))
        {
            cipherbukva = toupper(cipherbukva);
        }
        str += cipherbukva;
    }
    return str;
}

string decrypt_caesar(string cipher, int numberOfPositions, string alf) 
{
    string str = encrypt_caesar(cipher, alf, 26 - (numberOfPositions % 26));
    return str;
}

int main() {

    string text = "Hello, World!";
    string alph = "abcdefghijklmnopqrstuvwxyz";
    int numberOfPositions;
    cout << "Оригинальный текст: " << text << endl;
    cout << "Введите сдвиг для зашифровки: ";
    cin >> numberOfPositions;
    string cipher = encrypt_caesar(text, alph, numberOfPositions);
    string decipher = decrypt_caesar(cipher, numberOfPositions, alph);
    cout << "Зашифрованный текст: " << cipher << endl;
    cout << "Расшифрованный текст: " << decipher;
    return 0;
}
