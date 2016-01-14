#include "stdafx.h"
#include "Cone.h"

CCone::CCone()
	: CBody("Cone", 0)
{
}

double CCone::GetVolume() const
{
	return 0;
}

void CCone::AppendProperties(std::ostream & strm) const
{
}
