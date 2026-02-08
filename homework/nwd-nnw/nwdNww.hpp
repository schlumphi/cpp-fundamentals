#pragma once

int NWD(int lhs, int rhs) {
    auto a = abs(lhs);
    auto b = abs(rhs);
    while (b != 0) {
        auto c{a % b};
        a = b;
        b = c;
    }

    return a;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
