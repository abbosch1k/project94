#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string names[5] = {
        "Shadow","Pixel","Dragon","Ghost","Nova"
    };

    cout << names[rand() % 5]
         << rand() % 1000;

    return 0;
}
