#pragma once
#include "Body.h"

class CParallelepiped final :
	public CBody
{
public:
	CParallelepiped(double length, double width, double height);

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

