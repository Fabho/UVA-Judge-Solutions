/*
Fabho
Fabian Calsina Chuquimia
May 2022
*/

#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {

    int members, budget, hotels, weeks, price, beds;


    while(scanf("%d %d %d %d", &members, &budget, &hotels, &weeks) != EOF) {

        set<int> options;

        for(int i=0; i<hotels; i++) {
            scanf("%d", &price);

            for(int j=0; j<weeks; j++) {
                scanf("%d", &beds);

                if(beds<members || members*price > budget) continue;

                options.insert(members*price);
            }
        }

        if(options.empty())
            printf("stay home\n");
        else {
            set<int>::iterator it=options.begin();
            cout<<*it<<endl;
        }

    }

    return 0;
}
