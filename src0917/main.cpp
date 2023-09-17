#include <iostream>

int main()
{
    auto result = (10 <=> 10) < 0;
    std::cout << result << std::endl;
}
