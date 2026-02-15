#include <iostream>
#include <memory>

auto foo(std::shared_ptr<int> data) -> void {
    *data = 20;
    std::cout << *data << "\n";
    std::cout << data.use_count() << "\n";
}

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << *number << "\n";
    std::cout << number.use_count() << "\n";

    foo(number);
    std::cout << *number << "\n";
    std::cout << number.use_count() << "\n";

    return 0;
}
