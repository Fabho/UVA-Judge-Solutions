/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    string line;
    bool isFirstQuote = true;
    
    while(getline(cin, line)) {
        for(int x=0; x<line.size(); x++) {

            if(line[x] == '\"')
            {
                if(isFirstQuote) 
                    cout<<"\`\`";
                else 
                    cout<<"\'\'";
                
                isFirstQuote = !isFirstQuote;
            }
            else {
                cout<<line[x];
            }
        }
        cout<<'\n';
    }

    return 0;
}