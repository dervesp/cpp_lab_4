#include "stdafx.h"
#include "BodyBuilder.h"


CBodyBuilder::CBodyBuilder(std::ostream & out)
	: m_out(out)
{
}

void CBodyBuilder::ProcessLine(std::istringstream & in)
{
	std::string command;
	if (in >> command)
	{

		if (command == "list")
		{
			ShowList(in);
		}
		else if (command == "maxmass")
		{
			CountMaxMass(in);
		}
		else if (command == "minweight")
		{
			CountMinWeight(in);
		}
		else if (command == "cylinder")
		{
			CreateCylinder(in);
		}
		else if (command == "parallelepiped")
		{
			CreateParallelepiped(in);
		}
		else if (command == "sphere")
		{
			CreateSphere(in);
		}
		else if (command == "cone")
		{
			CreateCone(in);
		}
		else
		{
			m_out << "unknown command" << std::endl;
		}
	}
	else
	{
		m_out << "unknown command" << std::endl;
	}
}

void CBodyBuilder::CreateSphere(std::istringstream & in)
{
	double density, radius;

	if (in >> density >> radius)
	{
		try
		{
			m_bodies.push_back(BodyPtr(new CSphere(density, radius)));
		}
		catch (std::invalid_argument const & ex)
		{
			m_out << "Error: " << ex.what();
		}
	}
	else
	{
		m_out << "Usage: sphere <density> <radius>" << std::endl;
	}
}

void CBodyBuilder::CreateCone(std::istringstream & in)
{
	double density, radius, height;

	if (in >> density >> radius >> height)
	{
		try
		{
			m_bodies.push_back(BodyPtr(new CCone(density, radius, height)));
		}
		catch (std::invalid_argument const & ex)
		{
			m_out << "Error: " << ex.what();
		}
	}
	else
	{
		m_out << "Usage: cone <density> <radius> <height>" << std::endl;
	}
}

void CBodyBuilder::CreateParallelepiped(std::istringstream & in)
{
	double density, length, width, height;

	if (in >> density >> length >> width >> height)
	{
		try
		{
			m_bodies.push_back(BodyPtr(new CParallelepiped(density, length, width, height)));
		}
		catch (std::invalid_argument const & ex)
		{
			m_out << "Error: " << ex.what();
		}
	}
	else
	{
		m_out << "Usage: parallelepiped <density> <length> <width> <height>" << std::endl;
	}
}

void CBodyBuilder::CreateCylinder(std::istringstream & in)
{
	double density, radius, height;

	if (in >> density >> radius >> height)
	{
		try
		{
			m_bodies.push_back(BodyPtr(new CCylinder(density, radius, height)));
		}
		catch (std::invalid_argument const & ex)
		{
			m_out << "Error: " << ex.what();
		}
	}
	else
	{
		m_out << "Usage: cylinder <density> <radius> <height>" << std::endl;
	}
}

void CBodyBuilder::ShowList(std::istringstream & in) const
{
	if (!m_bodies.empty())
	{
		for (auto & body : m_bodies)
		{
			m_out << body->ToString();
		}
	}
	else
	{
		m_out << "Empty list" << std::endl;
	}
}

void CBodyBuilder::CountMaxMass(std::istringstream & in) const
{
	if (!m_bodies.empty())
	{
		BodyPtr maxMassBody = m_bodies[0];
		for (auto & body : m_bodies)
		{
			maxMassBody = (maxMassBody->GetMass() < body->GetMass()) ? body : maxMassBody;
		}
		m_out << "Max mass body: " << std::endl;
		m_out << maxMassBody->ToString();
	}
	else
	{
		m_out << "Empty list" << std::endl;
	}
}

void CBodyBuilder::CountMinWeight(std::istringstream & in) const
{
	if (!m_bodies.empty())
	{
		BodyPtr minWeightBody = m_bodies[0];
		for (auto & body : m_bodies)
		{
			minWeightBody = (CalcWeightInWater(minWeightBody) > CalcWeightInWater(body)) ? body : minWeightBody;
		}
		m_out << "Min weight in water body: " << std::to_string(CalcWeightInWater(minWeightBody)) << std::endl;
		m_out << minWeightBody->ToString();
	}
	else
	{
		m_out << "Empty list" << std::endl;
	}
}



double CBodyBuilder::CalcWeightInWater(BodyPtr body) const
{
	return (body->GetDensity() - 1000) * 9.8 * body->GetVolume();
}