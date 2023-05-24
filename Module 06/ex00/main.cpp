#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
        return (0);
    ScalarConverter warp(argv[1]);
    warp.convert();
    std::cout << warp << std::endl;
    return (0);
}