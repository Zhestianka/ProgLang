#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;

    auto z = x + y;
    std::cout << typeid(z).name() << std::endl;

    return 0;
}
