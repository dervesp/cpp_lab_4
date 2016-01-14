#pragma once
#include "Body.h"
class CCylinder :
	public CBody
{
public:
	CCylinder();

	double GetVolume() const override;
protected:
	void AppendProperties(std::ostream & strm) const override;
};

