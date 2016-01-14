#pragma once
#include "Body.h"

class CParallelepiped final :
	public CBody
{
public:
	CParallelepiped();

	double GetVolume() const override;
protected:
	void AppendProperties(std::ostream & strm) const override;
};

