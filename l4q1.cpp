#include <iostream>

long long power(long long a, int n) {
    
    if (n == 0) {
        return 1;
    }
    else
    return a * power(a, n - 1);
}

int main() {
    long long a;
    int n;
    
    std::cout << "Enter the base (a): ";
    std::cin >> a;
    
    std::cout << "Enter the exponent (n): ";
    std::cin >> n;
    
    std::cout << a << "^" << n << " = " << power(a, n) << std::endl;
    
    return 0;
}

