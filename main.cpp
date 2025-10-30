#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    if (n == 1)
    {
        std::cout << "NONE" << std::endl;
        return 0;
    }

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

    bool s{true};
    for (int i{0}; i < n; ++i) // 行
    {
        for (int j{0}; j < n; ++j) // 列
        {
            s = true;
            for (int k{0}; k < n; ++k) // 行最大
            {
                if (k == j)
                    continue;
                if (num.at(i).at(k) >= num.at(i).at(j))
                    s = false;
            }

            if (s)
            {
                for (int k{0}; k < n; ++k) // 列最大
                {
                    if (k == i)
                        continue;
                    if (num.at(k).at(j) <= num.at(i).at(j))
                        s = false;
                }
                if (s)
                {
                    std::cout << i << ' ' << j << std::endl;
                    return 0;
                }
            }
        }
    }

    std::cout << "NONE" << std::endl;
    return 0;
}
