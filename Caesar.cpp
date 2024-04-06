#include <iostream>
#include <string>
using namespace std;
int main(){
    string text = "hello";
    string alf = "abcdefghijklmnopqrstuvwxyz";
    int numberOfPositions;
    cout << "Enter number of positions: ";
    cin >> numberOfPositions;
    for (char c: text)
    {
        tolower(c);
    }
    for (int i = 0; i < text.size(); i++)
    {
        for (int j  = 0; j < alf.size(); j++)
        {
            
            if (text[i] == alf[j])
            {
                cout << alf[j + numberOfPositions];
            }
            
            
        }
        
    }
    return 0;
}