#include <iostream>
using namespace std;

float volume_Cylinder(float r, float h);
float volume_Sphere(float r);
float volume_Cube(float s);

int main()
{
    float radius, height, side;

    cout << "Enter radius and height of cylinder: ";
    cin >> radius >> height;
    cout << "Volume of Cylinder = " << volume_Cylinder(radius, height) << endl;

    cout << "Enter radius of sphere: ";
    cin >> radius;
    cout << "Volume of Sphere = " << volume_Sphere(radius) << endl;

    cout << "Enter side of cube: ";
    cin >> side;
    cout << "Volume of Cube = " << volume_Cube(side) << endl;

    return 0;
}

float volume_Cylinder(float r, float h)
{
    return 3.14 * r * r * h;
}

float volume_Sphere(float r)
{
    return (4.0 / 3.0) * 3.14 * r * r * r;
}

float volume_Cube(float s)
{
    return s * s * s;
}
