#include <iostream>
#include "vector3d"
#include "matrix3d"

using namespace std;
using namespace gm;

int main(int argv, char *args[])
{
    const Vector3D vector{1, 2, 3};
    const Vector3D vector2{1, 5, 7};

    if (vector == (Vector3D::project(vector, vector2) + Vector3D::reject(vector, vector2)))
    {
        std::cout << "true !!\n";
    }

    // Example usage of inverse
    gm::Vector3D vec1(4, -2.0, 1.0);
    gm::Vector3D vec2(5.0, 0.0, 3.0);
    gm::Vector3D vec3(-1.0, 2.0, 6.0);

    gm::Matrix3D mat(vec1, vec2, vec3);
    std::cout << "Original matrix:\n"
              << mat << std::endl;

    gm::Matrix3D invMat = gm::inverse(mat);
    std::cout << "Inverse matrix:\n"
              << invMat << std::endl;

    return 0;
}