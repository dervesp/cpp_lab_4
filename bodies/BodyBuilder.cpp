#include "stdafx.h"
#include "BodyBuilder.h"

CBody * CBodyBuilder::CreateFromStream(std::istream & in)
{
    std::string stringLine;

    if (getline(in, stringLine))
    {
        if (!stringLine.empty())
        {
            std::istringstream stringStream(stringLine);
            std::string bodyType;
            stringStream >> bodyType;

            if (bodyType == "sphere")
            {
                return CreateSphere(stringStream);
            }
            else if (bodyType == "cone")
            {
                return CreateCone(stringStream);
            }
        }
    }
    return nullptr;
}

CBody * CBodyBuilder::CreateSphere(std::istringstream & in)
{
    CBody * body;
    std::string word;
    try
    {
        in >> word;
        double density = stod(word);

        in >> word;
        double radius = stod(word);

        body =  new CSphere(density, radius);
    }
    catch (std::invalid_argument)
    {
        body = nullptr;
    }
    return body;
}

CBody * CBodyBuilder::CreateCone(std::istringstream & in)
{
    CBody * body;
    std::string word;
    try
    {
        in >> word;
        double density = stod(word);

        in >> word;
        double radius = stod(word);

        in >> word;
        double height = stod(word);
        body = new CCone(density, radius, height);
    }
    catch (std::invalid_argument)
    {
        body = nullptr;
    }
    return body;
}