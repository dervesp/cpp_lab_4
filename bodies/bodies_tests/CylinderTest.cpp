#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Cylinder.h"
#include <math.h>


struct Cylinder_
{
	const CCylinder cylinder;
	Cylinder_()
		: cylinder()
	{}
};
	// �����
	BOOST_FIXTURE_TEST_SUITE(Cylinder, Cylinder_)
	// �������� �������� �����
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		BOOST_CHECK(static_cast<const CBody*>(&cylinder));
	}
BOOST_AUTO_TEST_SUITE_END()