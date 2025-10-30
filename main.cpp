#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    std::array<int, 4> num;
    for (int i{0}; i < 4; ++i)
    {
        num.at(i) = std::cin.get() - '0';
    }

    for (int &i : num)
    {
        i = (i + 9) % 10;
    }

    std::swap(num.at(1), num.at(3));
    std::swap(num.at(0), num.at(2));

    std::cout << "The encrypted number is ";
    for (int i : num)
        std::cout << i;
    std::cout << std::endl;
}
