/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int cases;
    int divisionX;
    int divisionY;
    int xPoint, yPoint;
    string answer;

    while(scanf("%d", &cases)) {
        if(!cases)
            break;
        
        scanf("%d %d", &divisionX, &divisionY);

        for(int i=0; i<cases; i++) {
            scanf("%d %d", &xPoint, &yPoint);
            
            if(xPoint == divisionX || yPoint == divisionY)
                answer = "divisa";
            else if(xPoint > divisionX && yPoint > divisionY)
                answer = "NE";
            else if(xPoint < divisionX && yPoint > divisionY)
                answer = "NO";
            else if(xPoint < divisionX && yPoint < divisionY)
                answer = "SO";
            else if(xPoint > divisionX && yPoint < divisionY)
                answer = "SE";
            
            cout<<answer<<'\n';
        }
    }

    return 0;
}
