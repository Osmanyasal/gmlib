#include <iostream>
#include "vector3d"
int main(int argv, char *args[])
{
    gm::Vector3D vector{1, 2, 3};
    gm::Vector3D vector2{2, 1, 0};

    std::cout << vector + vector2 << std::endl;
    std::cout << vector - vector2 << std::endl;

    return 0;
}