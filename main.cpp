#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> vec;
    vec.resize(n);
    for (int i{0}; i < n; ++i)
    {
        vec.at(i).resize(n);
        for (int j{0}; j < n; ++j)
        {
            std::cin >> vec.at(i).at(j);
        }
    }

    for (int i{0}; i < n; ++i)
    {
        vec.at(i).at(n - i - 1) = 0;
        vec.at(i).at(n - 1) = 0;
        vec.at(n - 1).at(i) = 0;
    }

    int num{0};
    for (auto i : vec)
    {
        num += std::accumulate(i.begin(), i.end(), 0);
    }

    std::cout << num << std::endl;
}