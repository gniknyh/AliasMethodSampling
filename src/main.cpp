#include <iostream>
#include <AliasMethodSampling.hpp>

int main()
{
    auto s = AliasMethodSampling();
    float p = 1;
    std::cout << s.sample(0.1f, p) << std::endl;
    return 0;
}