#pragma once
#include "Body.h"

class CCone :
	public CBody
{
public:
	CCone(double radius);

	double GetRadius() const;
	double GetVolume() const override;
protected:
	void AppendProperties(std::ostream & strm) const override;
private:
	double m_radius;
};

