/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
using namespace std;

int main() {
    
    string word, answer;
    int caseNumber = 1;

    while(cin>>word) {

        if(word == "#") break;

        if(word == "HELLO")
            answer = "ENGLISH";
        else if(word == "HOLA")
            answer = "SPANISH";
        else if(word == "HALLO")
            answer = "GERMAN";
        else if(word == "BONJOUR")
            answer = "FRENCH";
        else if(word == "CIAO")
            answer = "ITALIAN";
        else if(word == "ZDRAVSTVUJTE")
            answer = "RUSSIAN";
        else
            answer = "UNKNOWN";

        cout<<"Case "<<caseNumber++<<": "<<answer<<"\n";
    }

    return 0;
}