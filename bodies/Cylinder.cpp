#include "stdafx.h"
#include "Cylinder.h"


CCylinder::CCylinder(double radius)
	: CBody("Cylinder", 0),
	m_radius(radius)
{
}

double CCylinder::GetRadius() const
{
	return m_radius;
}

double CCylinder::GetVolume() const
{
	return 0;
}

void CCylinder::AppendProperties(std::ostream & strm) const
{
}
