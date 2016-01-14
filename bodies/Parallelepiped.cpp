#include "stdafx.h"
#include "Parallelepiped.h"

CParallelepiped::CParallelepiped(double length, double width)
	: CBody("Parallelepiped", 0),
	m_length(length),
	m_width(width)
{
}

double CParallelepiped::GetLength() const
{
	return m_length;
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