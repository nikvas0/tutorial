#include <iostream>
#include <cmath>
#include <vector>

template <class T>
int addElement(int a, std::vector<T>& v) {
    v.push_back(a);
    return 1000000;
}

int plus(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "sum of a and b is " << a + b << std::endl;
    return 0;
}

