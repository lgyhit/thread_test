#include <future>
#include <thread>
#include <mutex>
#include <iostream>
#include <math.h>
double square_root(double x) {
    std::cout << "x = " << x << std::endl;
    if (x<0) {
        throw std::out_of_range("x<0");
    }
    return sqrt(x);
}

int main(int argc, char* argv[])
{
    std::future<double> f = std::async(square_root, -1);
    double y = f.get();
    std::cout << "result is " << y << std::endl;
}
