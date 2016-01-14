#include "stdafx.h"
#include "BodyBuilder.h"

std::shared_ptr<CBody> CBodyBuilder::CreateFromStream(std::istream & in)
{
    std::shared_ptr<CBody> body = std::shared_ptr<CBody>();
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
                body = CreateSphere(stringStream);
            }
            else if (bodyType == "cone")
            {
                body = CreateCone(stringStream);
            }
        }
    }
    return body;
}

std::shared_ptr<CBody> CBodyBuilder::CreateSphere(std::istringstream & in)
{
    std::shared_ptr<CBody> body;
    std::string word;
    try
    {
        word = "";
        in >> word;
        double density = stod(word);

        word = "";
        in >> word;
        double radius = stod(word);

        body = std::shared_ptr<CBody>(new CSphere(density, radius));
    }
    catch (std::invalid_argument)
    {
        body = std::shared_ptr<CBody>();
    }
    return body;
}

std::shared_ptr<CBody> CBodyBuilder::CreateCone(std::istringstream & in)
{
    std::shared_ptr<CBody> body;
    std::string word;
    try
    {
        word = "";
        in >> word;
        double density = stod(word);

        word = "";
        in >> word;
        double radius = stod(word);

        word = "";
        in >> word;
        double height = stod(word);
        body = std::shared_ptr<CBody>(new CCone(density, radius, height));
    }
    catch (std::invalid_argument)
    {
        body = std::shared_ptr<CBody>();
    }
    return body;
}