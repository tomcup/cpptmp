#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<unsigned> cases;
    cases.push_back(0);

    unsigned n;
    std::cin >> n;

    unsigned s;
    bool status;

    for (unsigned i{0}; i < n; ++i)
    {
        std::cin >> s;

        status = false;
        for (unsigned j{0}; j < cases.size(); ++j)
        {
            if (cases.at(j) + s > 100)
                continue;
            else
            {
                cases.at(j) += s;
                status = true;
                std::cout << s << ' ' << j + 1 << std::endl;
                break;
            }
        }
        if (!status)
        {
            cases.push_back(s);
            std::cout << s << ' ' << cases.size() << std::endl;
        }
    }
    std::cout << cases.size() << std::endl;
}
