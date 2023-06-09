#include "ScalarConverter.hpp"

void test_overflow( std::string input, std::string test_name )
{
    ScalarConverter test;

    test.convert(input);
    std::cout << "Test:   ";
    if(test_name == "")
        std::cout << input << std::endl;
    else
        std::cout << test_name << std::endl;
    std::cout << test << std::endl;
    return ;
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: Just one arg" << std::endl;
        return (0);
    }
    ScalarConverter a;
    a.convert(argv[1]);
    std::cout << a << std::endl;

    //test_overflow( "2147483647", "");
    //test_overflow( "-2147483648", "");
    //test_overflow( "340282346600000000000000000000000000000.0f",  "");
    //test_overflow( "0.00000000000000000000000000000000000001175494351f", "");
    //test_overflow( "179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000", "DOUBLE MAX");
    //test_overflow( "0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000022250738585072014", "DOUBLE MIN");



    /* std::cout << a.getIs() << std::endl;
    std::cout << a.iDoNothing() << std::endl;
    std::cout << a.getIs() << std::endl; */

    // Test overload = 

    /* ScalarConverter b;         
    std::cout << b << std::endl;
    b = a;
    std::cout << b << std::endl; */

    return (0);
}