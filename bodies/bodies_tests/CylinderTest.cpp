#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Cylinder.h"
#include <math.h>


struct Cylinder_
{
	const double expectedRadius = 10.1;
	const double expectedHeight = 11.5;
	const CCylinder cylinder;
	Cylinder_()
		: cylinder(expectedRadius, expectedHeight)
	{}
};
	// �����
	BOOST_FIXTURE_TEST_SUITE(Cylinder, Cylinder_)
	// �������� �������� �����
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		BOOST_CHECK(static_cast<const CBody*>(&cylinder));
	}
	// ����� ������
	BOOST_AUTO_TEST_CASE(has_a_radius)
	{
		BOOST_CHECK_EQUAL(cylinder.GetRadius(), expectedRadius);
	}
	// ����� ������
	BOOST_AUTO_TEST_CASE(has_a_height)
	{
		BOOST_CHECK_EQUAL(cylinder.GetHeight(), expectedHeight);
	}
BOOST_AUTO_TEST_SUITE_END()