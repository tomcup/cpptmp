#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    int tmp;

    std::vector<int> vec;
    for (int i{0}; i < n; ++i)
    {
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    int p, num{-999999};
    for (int i{0}; i < n; ++i)
    {
        if (vec.at(i) > num)
        {
            p = i;
            num = vec.at(i);
        }
    }

    std::cout << num << ' ' << p << std::endl;
}