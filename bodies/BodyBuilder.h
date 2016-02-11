#pragma once
#include <vector>
#include "Body.h"
#include "Sphere.h"
#include "Cone.h"
#include "Parallelepiped.h"
#include "Cylinder.h"

class CBodyBuilder
{
public:
	CBodyBuilder(std::ostream & out);
	void ProcessLine(std::istringstream & in);
private:
	void CreateSphere(std::istringstream & in);
	void CreateCone(std::istringstream & in);
	void CreateParallelepiped(std::istringstream & in);
	void CreateCylinder(std::istringstream & in);
	void ShowList(std::istringstream & in) const;
	void CountMaxMass(std::istringstream & in) const;
	void CountMinWeight(std::istringstream & in) const;
	double CalcWeightInWater(BodyPtr body) const;

	std::vector<BodyPtr> m_bodies;
	std::ostream & m_out;
};

