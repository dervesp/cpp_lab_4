#include "stdafx.h"
#include "Cone.h"

CCone::CCone(double radius)
	: CBody("Cone", 0),
	m_radius(radius)
{
}

double CCone::GetRadius() const
{
	return m_radius;
}

double CCone::GetVolume() const
{
	return 0;
}

void CCone::AppendProperties(std::ostream & strm) const
{
}
