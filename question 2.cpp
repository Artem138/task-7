#include <iostream>
#include <cassert>

bool isPrime(int x) {
    if (x <= 1) {
        return false; // 0 и 1 не являются простыми числами
    }
    for (int i = 2; i * i <= x; ++i) { // Проверка делимости до корня из x
        if (x % i == 0) {
            return false; // Если делится без остатка, то не простое
        }
    }
    return true; // Если не делится ни на одно число, то простое
}

int main() {
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!";

    return 0;
}
