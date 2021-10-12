/*
Fabho
Fabian Calsina Chuquimia
2021
*/

#include <iostream>
using namespace std;

int main() {
    
    int cases, walls, previousWall, low, high, wallHeight;
    
    cin>>cases;

    for(int i=1; i<=cases; i++) {
        low=high=0;

        cin>>walls;

        for(int j=0; j<walls; j++) {
            
            cin>>wallHeight;

            if(j==0) {
                previousWall = wallHeight;
                continue;
            }

            if(wallHeight > previousWall) {
                high++;
            }
            else if (wallHeight < previousWall){
                low++;
            }

            previousWall = wallHeight;
        }

        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    
    }

    return 0;
}