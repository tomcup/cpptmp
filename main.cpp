#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    int T;
    std::cin >> T;
    while (T)
    {
        --T;

        int n;
        std::cin >> n;

        std::vector<std::vector<int>> num;
        num.resize(n);

        for (int i{0}; i < n; ++i)
        {
            num.at(i).resize(n);
            for (int j{0}; j < n; ++j)
            {
                std::cin >> num.at(i).at(j);
            }
        }

        bool hey{};

        for (int i{0}; i < n; ++i)
        {
            for (int j{0}; j < n - i - 1; ++j)
            {
                if (num.at(n - 1 - i).at(j) != 0)
                    hey = true;
            }
        }

        if (hey)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    }
}