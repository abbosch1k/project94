#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string colors[5] = {
        "Red","Blue","Green","Black","White"
    };

    cout << colors[rand() % 5];

    return 0;
}
