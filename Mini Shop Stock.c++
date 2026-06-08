#include <iostream>
using namespace std;

int main() {

    int stock;

    cin >> stock;

    if(stock == 0)
        cout << "Out Of Stock";
    else
        cout << "Available";

    return 0;
}
