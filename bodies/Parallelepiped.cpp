#include "stdafx.h"
#include "Parallelepiped.h"

CParallelepiped::CParallelepiped(double width)
	: CBody("Parallelepiped", 0),
	m_width(width)
{
}

double CParallelepiped::GetWidth() const
{
	return m_width;
}

double CParallelepiped::GetVolume() const
{
	return 0;
}

void CParallelepiped::AppendProperties(std::ostream & strm) const
{
}