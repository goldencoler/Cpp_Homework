#include <iostream>
#include <bitset>

int main()
{
    int a {1};
    int b {-2};
    int c {10};

    std::cout << "Initial Integers: " << "\n";
    std::cout << "a = " << a << "; binary form: " << std::bitset<32>(a).to_string() << "\n";
    std::cout << "b = " << b << "; binary form: " << std::bitset<32>(b).to_string() << "\n";
    std::cout << "c = " << c << "; binary form: " << std::bitset<32>(c).to_string() << "\n";

    a = ( a % 2 == 0 && a > 0) ? a << 2: a >> 2;
    b = ( b % 2 == 0 && b > 0) ? b << 2: b >> 2;
    c = ( c % 2 == 0 && c > 0) ? c << 2: c >> 2;

    std::cout << "\n" << "Final Integers: " << "\n";
    std::cout << "a = " << a << "; binary form: " << std::bitset<32>(a).to_string() << "\n";
    std::cout << "b = " << b << "; binary form: " << std::bitset<32>(b).to_string() << "\n";
    std::cout << "c = " << c << "; binary form: " << std::bitset<32>(c).to_string() << "\n";
}