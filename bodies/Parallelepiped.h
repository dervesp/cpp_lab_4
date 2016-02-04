#pragma once
#include "SolidBody.h"

class CParallelepiped final :
	public CSolidBody
{
public:
	CParallelepiped(double density, double length, double width, double height);

	double GetLength() const;
	double GetWidth() const;
	double GetHeight() const;
	double GetVolume() const override;
protected:
	void AppendProperties(std::ostream & strm) const override;
private:
	double m_width;
	double m_length;
	double m_height;
};

