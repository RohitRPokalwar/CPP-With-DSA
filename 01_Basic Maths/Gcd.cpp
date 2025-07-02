#include <iostream>
#include <cmath>

bool isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Calculate the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0)
    {
        int digit = originalNum % 10;
        sum += std::pow(digit, n);
        originalNum /= 10;
    }

    return sum == num;
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num))
    {
        std::cout << num << " is an Armstrong number." << std::endl;
    }
    else
    {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}