#pragma once
#include "Body.h"
#include "Sphere.h"
#include "Cone.h"

class CBodyBuilder
{
public:
    std::shared_ptr<CBody> CreateFromStream(std::istream & in);
private:
    std::shared_ptr<CBody> CreateSphere(std::istringstream & in);
    std::shared_ptr<CBody> CreateCone(std::istringstream & in);
};

