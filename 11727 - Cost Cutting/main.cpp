/*
Fabho
Fabian Calsina Chuquimia
2021
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cases, salary;
    vector<int> salaries;

    cin>>cases;

    for(int i=1; i<=cases; i++) {

        for(int j=0; j<3; j++) {
            cin>>salary;
            salaries.push_back(salary);
        }

        sort(salaries.begin(), salaries.end());
        
        cout<<"Case "<<i<<": "<<salaries[1]<<endl;

        salaries.clear();
    }

    return 0;
}