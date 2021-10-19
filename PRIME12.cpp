#include <iostream>
#include <cmath>

int snt(long long n)
{
    if (n < 2) return 0;
    else
        for (long long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0) return 0;
        }
    return 1;
}

int main()
{
    int testCase, k;
    long long number, primeFactors[1001];

    std::cin >> testCase;
    while (testCase--)
    {
        int index = 1;

        for (int i = 0; i < 1001; i++)
        {
            primeFactors[i] = 0;
        }

        std::cin >> number;
        std::cin >> k;
        if (snt(number))
        {
            if (k == 1) std::cout << number << std::endl;
            else std::cout << "-1" << std::endl;
        }
        else
        {
            for (int i = 2; i <= sqrt(number); i++)
            {
                while (number % i == 0)
                {
                    primeFactors[index] = i;
                    index++;
                    number /= i;
                } // chia nho so 
                if (number == 1)
                {
                    index = 1;
                    break;
                }
            }
            if (number != 1)
            {
                primeFactors[index] = number;
                index = 1;
            }
            if (primeFactors[k] == 0) std::cout << "-1" << std::endl;
            else std::cout << primeFactors[k] << std::endl;
        }
    }
}