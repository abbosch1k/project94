#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string animals[4] = {
        "Cat","Dog","Wolf","Fox"
    };

    cout << animals[rand() % 4];

    return 0;
}
