#include "stdafx.h"

#define _USE_MATH_DEFINES
#include "../Parallelepiped.h"
#include <math.h>


struct Parallelepiped_
{
	const double expectedLength = 1.1;
	const double expectedWidth = 10.1;
	const double expectedHeight = 20.1;
	const double expectedDensity = 8.8;
	const CParallelepiped parallelepiped;
	Parallelepiped_()
		: parallelepiped(expectedDensity, expectedLength, expectedWidth, expectedHeight)
	{}
};
// ��������������
BOOST_FIXTURE_TEST_SUITE(Parallelepiped, Parallelepiped_)
	// �������� �������� �����
	BOOST_AUTO_TEST_CASE(is_a_body)
	{
		BOOST_CHECK(static_cast<const CBody*>(&parallelepiped));
	}
	// ����� �����
	BOOST_AUTO_TEST_CASE(has_a_length)
	{
		BOOST_CHECK_EQUAL(parallelepiped.GetLength(), expectedLength);
	}
	// ����� ������
	BOOST_AUTO_TEST_CASE(has_a_width)
	{
		BOOST_CHECK_EQUAL(parallelepiped.GetWidth(), expectedWidth);
	}
	// ����� ������
	BOOST_AUTO_TEST_CASE(has_a_height)
	{
		BOOST_CHECK_EQUAL(parallelepiped.GetHeight(), expectedHeight);
	}
	// ����� ���������
	BOOST_AUTO_TEST_CASE(has_a_density)
	{
		BOOST_CHECK_EQUAL(static_cast<const CBody &>(parallelepiped).GetDensity(), expectedDensity);
	}
BOOST_AUTO_TEST_SUITE_END()