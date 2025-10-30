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

    if (n == 1)
    {
        std::cout << vec.at(0).at(0) << 0 << std::endl;
        return 0;
    }

    int outside{}, inside{};

    outside += std::accumulate(vec.at(0).begin(), vec.at(0).end(), 0) + std::accumulate(vec.at(n - 1).begin(), vec.at(n - 1).end(), 0);

    for (int i{1}; i < n - 1; ++i)
    {
        outside += vec.at(i).at(0) + vec.at(i).at(n - 1);
        inside += std::accumulate(vec.at(i).begin() + 1, vec.at(i).end() - 1, 0);
    }

    std::cout << outside << ' ' << inside << std::endl;
    return 0;
}
