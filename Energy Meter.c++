#include <iostream>
using namespace std;

int main() {

    int energy;

    cin >> energy;

    if(energy < 20)
        cout << "Low Energy";
    else
        cout << "Energy OK";

    return 0;
}
