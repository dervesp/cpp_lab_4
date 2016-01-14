#pragma once
#include "Body.h"
#include "Sphere.h"
#include "Cone.h"

class CBodyBuilder
{
public:
    CBody * CreateFromStream(std::istream & in);
private:
    CBody * CreateSphere(std::istringstream & in);
    CBody * CreateCone(std::istringstream & in);
};

