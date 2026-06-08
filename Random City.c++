#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string cities[4] = {
        "Tokyo","Paris","London","Rome"
    };

    cout << cities[rand() % 4];

    return 0;
}
