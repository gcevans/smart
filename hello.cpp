#include <iostream>
#include <string>

using namespace std;

const string hello = "Hello";

string * worldFactory() {
    return new string("World");
}

int main () {

    string *world = worldFactory();

    cout << hello << ", " << *world << endl;

    return 0;
}