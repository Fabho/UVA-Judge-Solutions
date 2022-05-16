/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int groups;

    scanf("%d", &groups);
    
    printf("Lumberjacks:\n");

    while (groups--) {
        vector<int> lumberjacks(10), sortedLumberjacks, reverseSortedLumberjacks;

        for(int i=0; i<10; i++)
            cin>>lumberjacks[i];

        sortedLumberjacks = reverseSortedLumberjacks = lumberjacks;

        sort(sortedLumberjacks.begin(), sortedLumberjacks.end());
        sort(reverseSortedLumberjacks.begin(), reverseSortedLumberjacks.end(), greater<int>());

        if(lumberjacks == sortedLumberjacks || lumberjacks == reverseSortedLumberjacks) 
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }

    return 0;
}
