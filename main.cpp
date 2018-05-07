#include <iostream>
#include <functional>
using namespace std;
typedef int (*callbackFunc)(int);
int aFunction(int x) {
    return x;
}
void anotherFunction(callbackFunc somePtr) {
    cout << somePtr(5);
}

int main() {
    anotherFunction(aFunction);
    return 0;
}