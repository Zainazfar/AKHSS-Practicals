#include <iostream>
using namespace std;

float area_Circle(float r);
float area_Triangle(float b, float h);
float area_Parallelogram(float b, float h);

int main()
{
    float radius, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area_Circle(radius) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area_Triangle(base, height) << endl;

    cout << "Enter base and height of parallelogram: ";
    cin >> base >> height;
    cout << "Area of Parallelogram = " << area_Parallelogram(base, height) << endl;

    return 0;
}

float area_Circle(float r)
{
    return 3.14 * r * r;
}

float area_Triangle(float b, float h)
{
    return 0.5 * b * h;
}

float area_Parallelogram(float b, float h)
{
    return b * h;
}
