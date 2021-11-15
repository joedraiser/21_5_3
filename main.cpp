#include <iostream>
#include <math.h>

struct vector
    {
        double x;
        double y;
    };

vector add(vector& a, vector& b)
{
    vector temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}

vector subtract(vector& a, vector& b)
{
    vector temp;
    temp.x=a.x-b.x;
    temp.y=a.y-b.y;
    return temp;
}

vector scale(vector& a, double b)
{
    vector temp;
    temp.x=a.x*b;
    temp.y=a.y*b;
    return temp;
}

double lenght(vector& a)
{
    return sqrt(a.x*a.x+a.y*a.y);
}

vector normalize(vector& a)
{
    vector temp;
    temp.x=a.x / lenght(a);
    temp.y=a.y / lenght(a);
    return temp;
}

int main()
{
    vector a,b;
    std::cout << "Input x and y of vector: ";
    std::cin >> a.x >> a.y;

    std::cout << "Input operation you want to perform: ";
    std::string input;
    std::cin >> input;

    if(input == "add")
    {
        std::cout << "Input x and y of vector to add: ";
        std::cin >> b.x >> b.y;
        a=add(a,b);
        std::cout << "Result x=" << a.x << " y=" << a.y;
    }
    else if(input == "subtract")
    {
        std::cout << "Input x and y of vector to subtract: ";
        std::cin >> b.x >> b.y;
        a=subtract(a,b);
        std::cout << "Result x=" << a.x << " y=" << a.y;
    }
    else if(input == "scale")
    {
        std::cout << "Input x and y of vector to scale: ";
        std::cin >> b.x;
        a=scale(a,b.x);
        std::cout << "Result x=" << a.x << " y=" << a.y;
    }
    else if(input == "length")
    {
        std::cout << "Length is " << lenght(a);
    }
    else if(input == "normalize")
    {
        a= normalize(a);
        std::cout << "Result x=" << a.x << " y=" << a.y;
    }

    return 0;
}
