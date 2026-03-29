#include <iostream>

long long fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    long long prev = 0;
    long long curr = 1;

    for (int i = 2; i <= n; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
    return 0;
}