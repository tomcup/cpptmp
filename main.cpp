#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num;
    num.resize(n);

    for (int i{0}; i < n; ++i)
    {
        std::cin >> num.at(i);
    }

    std::vector<int> count;
    count.resize(10);

    for (std::string i : num)
    {
        for (char j : i)
        {
            count.at(j - '0') += 1;
        }
    }

    std::cout << *std::max_element(count.begin(), count.end()) << ":";

    for (int i{0}; i < 10; ++i)
    {
        if (count.at(i) == *std::max_element(count.begin(), count.end()))
            std::cout << ' ' << i;
    }
}