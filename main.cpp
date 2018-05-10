#include <iostream>
#include <functional>
using namespace std;
typedef int (*arithmeticFcn)(int, int);
typedef struct {
    char mathOp;
    arithmeticFcn callback;
} arithmeticStruct;


int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int multiply(int x, int y) {
    return x * y;
}
int divide(int x, int y) {
    return x / y;
}
int remainder(int x, int y) {
    return x % y;
}

arithmeticStruct operations[] = {
        {'+', add},
        {'-', subtract},
        {'*', multiply},
        {'/', divide},
        {'%', remainder}
};
arithmeticFcn getArithmeticFunction(char functionOperator){
    for (arithmeticStruct &op : operations) {
        if(op.mathOp == functionOperator) {
            return op.callback;
        }
    }
    return add;
}
int main() {
    int x =3;
    int y =2;
    cout << x % y;
    return 0;
}