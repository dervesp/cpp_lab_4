#pragma once
#include "Body.h"

class CSolidBody :
	public CBody
{
public:
	CSolidBody(const std::string & type, double density);

	double GetDensity() const;
	virtual double GetVolume() const = 0;
	double GetMass() const;

	virtual ~CSolidBody();
private:
	double m_density;
};

