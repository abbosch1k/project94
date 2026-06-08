#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string teams[4] = {
        "Red","Blue","Green","Yellow"
    };

    cout << teams[rand() % 4];

    return 0;
}
