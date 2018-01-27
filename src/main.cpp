#include <iostream>

#include "../include/point.h"
#include "../include/vector2d.h"

using namespace twod;

std::ostream& operator<<(std::ostream& out, const point& p)
{
    return out << "(" << p.x << ", " << p.y << ")";
}

std::ostream& operator<<(std::ostream& out, const vector2d& v)
{
    return out << v.begin << " -> " << v.end;
}

int main(int argc, char** argv)
{
    point first{ 0.0f, 1.0f};
    point second{ -1.0f, 0.0f};


    std::cout << "First: " << first << "\n";
    std::cout << "Second: " << second << "\n";
    std::cout << first << " * 4 = " << first * 4 << "\n";
    std::cout << "4 * first = " << 4 * first << "\n";
    first *= 4;
    std::cout << "first = " << first << "\n";
    std::cout << "first + second = " << first + second << "\n";

    vector2d a{ first, second },
             b{ first * -8, second * 9 };
    std::cout << "a = " << a << "\n"; 
    std::cout << "b = " << b << "\n"; 
    a += b;
    std::cout << "a = " << a * 2 << "\n"; 

    return 0;
}
