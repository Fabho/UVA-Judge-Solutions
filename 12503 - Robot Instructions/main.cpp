/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int cases, instructions, previousInstruction;
    vector <string> instructionsLog;
    int position;
    string instruction;

    scanf("%d", &cases);

    while(cases--) {
        scanf("%d", &instructions);
        getline(cin, instruction);
        position = 0;

        for(int i=0; i<instructions; i++) {
            getline(cin, instruction);
            instructionsLog.push_back(instruction);

            if(instruction == "LEFT") position -= 1;
            else if(instruction == "RIGHT") position += 1;
            else {
                while(true) {
                    previousInstruction = stoi(instruction.substr(8)) -1;

                    if(instructionsLog[previousInstruction] == "LEFT"){
                        position -= 1;
                        break;
                    }
                    else if(instructionsLog[previousInstruction] == "RIGHT") {
                        position += 1;
                        break;
                    }
                    else
                        instruction = instructionsLog[previousInstruction];
                }
            }
        }

        printf("%d\n", position);
        instructionsLog.clear();
        position = 0;
    }

    return 0;
}
