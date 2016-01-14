#include "stdafx.h"
#include "Parallelepiped.h"

CParallelepiped::CParallelepiped()
	: CBody("Parallelepiped", 0)
{
}

double CParallelepiped::GetVolume() const
{
	return 0;
}

void CParallelepiped::AppendProperties(std::ostream & strm) const
{
}