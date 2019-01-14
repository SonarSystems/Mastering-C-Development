#include <iostream>

double add(double left, double right)
{
    return left + right;
}

double multiplication(double left, double right)
{
    return left * right;
}

double binary(double left, double right, double (*f)(double, double))
{
    return (*f)(left, right);
}

int main(int argc, const char * argv[])
{
    double a = 5.0;
    double b = 10.0;
    
    std::cout << "Addition: " << binary(a, b, add) << std::endl;
    std::cout << "Multiplication: " << binary(a, b, multiplication) << std::endl;
    
    return 0;
}
