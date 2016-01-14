#include "stdafx.h"
#include "Cylinder.h"


CCylinder::CCylinder()
	: CBody("Cylinder", 0)
{
}

double CCylinder::GetVolume()const
{
	return 0;
}

void CCylinder::AppendProperties(std::ostream & strm) const
{
}
