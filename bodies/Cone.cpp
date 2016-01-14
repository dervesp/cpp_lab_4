#include "stdafx.h"
#include "Cone.h"

CCone::CCone(double radius, double height)
	: CBody("Cone", 0),
	m_radius(radius),
	m_height(height)
{
}

double CCone::GetRadius() const
{
	return m_radius;
}

double CCone::GetHeight() const
{
	return m_height;
}

double CCone::GetVolume() const
{
	return 0;
}

void CCone::AppendProperties(std::ostream & strm) const
{
}
