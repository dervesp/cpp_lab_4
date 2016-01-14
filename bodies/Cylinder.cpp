#include "stdafx.h"
#include "Cylinder.h"


CCylinder::CCylinder(double density, double radius, double height)
	: CBody("Cylinder", density),
	m_radius(radius),
	m_height(height)
{
}

double CCylinder::GetRadius() const
{
	return m_radius;
}

double CCylinder::GetHeight() const
{
	return m_height;
}

double CCylinder::GetVolume() const
{
	return 0;
}

void CCylinder::AppendProperties(std::ostream & strm) const
{
}
