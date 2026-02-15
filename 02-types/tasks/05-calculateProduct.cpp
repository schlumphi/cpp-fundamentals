#include <iostream>
#include <memory>

auto calculateProduct(const int lhs, const int rhs) -> std::shared_ptr<int> {
    auto number = std::make_shared<int>(lhs * rhs);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";
    return number;
}

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
