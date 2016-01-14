#pragma once
#include "Body.h"

class CCone :
	public CBody
{
public:
	CCone();

	double GetVolume() const override;
protected:
	void AppendProperties(std::ostream & strm) const override;
};

