#include <array>
#include <iostream>

void ArrayShift(int a[], int n, int m);

void CountOff(int n, int m, int out[]);

int main()
{

    int out[20], n = 11, m = 3;
    int i;

    CountOff(n, m, out);

    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");
}

// template <typename T, std::size_t N>
// void bubble_sort(std::array<T, N> &arr)
// {
//     for (int i{0}; i < arr.size(); ++i)
//     {
//         bool swaped{false};
//         for (int j{0}; j < arr.size() - i - 1; ++j)
//         {
//             if (arr.at(j) > arr.at(j + 1))
//         }
//     }
// }

void ArrayShift(int a[], int n, int m)
{
    if (m >= n)
    {
        m %= n;
    }
    int temp[m];
    for (int i = n - m; i < n; ++i)
    {
        temp[i - n + m] = a[i];
    }

    for (int i = n; i > m - 1; --i)
    {
        a[i] = a[i - m];
    }

    for (int i = 0; i < m; ++i)
    {
        a[i] = temp[i];
    }
}

void CountOff(int n, int m, int out[])
{
    int p = 0;
    bool people[n]{};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (p == n - 1)
            {
                p = 0;
            }
            else
            {
                ++p;
            }

            if (people[p])
            {
                --j;
                continue;
            }
        }
        people[p] = true;
        out[p] = i + 1;
    }
}

void max_row(int arr[][20], int m, int n)
{
    int output = 0;
    for (int i = 0; i < m; ++i)
    {
        output = 0;
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] > output)
                output = arr[i][j];
        }
        printf("The max in line %d is: %d\n", i + 1, output);
    }
}