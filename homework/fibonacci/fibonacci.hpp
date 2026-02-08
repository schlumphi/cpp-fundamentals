#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    }
    
    auto fn2{0};
    auto fn1{1};
    for (auto i = 2; i < sequence; ++i) {
        auto tmp = fn1 + fn2;
        fn2 = fn1;
        fn1 = tmp;
    }

    return fn1 + fn2;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
