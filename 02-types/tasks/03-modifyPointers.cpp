#include <iostream>

// TODO: Implement foo() and bar()
// foo() should modify value under passed pointer to 10
// bar() should modify value under passed pointer to 20
// Can we have a pointer to const or a const pointer?
auto foo(int* const data) -> void {
    *data = 10;
}

auto bar(int* const data) -> void {
    *data = 20;
}

int main() {
    int number = 5;
    int* const pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
