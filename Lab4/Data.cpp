#include "Data.h"
//INT DATA

void IntData::printContent() const
{
    std::cout<<value;
}

Data * IntData::clone() const
{
    return new IntData(value);
}

bool IntData::isEqual(const Data &dataValue)
{
    const IntData * dataPtr = dynamic_cast<const IntData*>(&dataValue);

    if( dataPtr )
    {
        if(dataPtr->value == value)
            return true;
    }

    return false;
}

IntData::~IntData()
{
    std::cout<<"~IntData()"<<std::endl;
}

//STRING DATA

void StringData::printContent() const
{
    std::cout<<value;
}

Data * StringData::clone() const
{
    return new StringData(value);
}

bool StringData::isEqual(const Data &dataValue)
{
    const StringData * dataPtr = dynamic_cast<const StringData*>(&dataValue);

    if( dataPtr )
    {
        if(dataPtr->value == value)
            return true;
    }

    return false;
}

StringData::~StringData()
{
    std::cout<<"~StringData()"<<std::endl;
}

//FLOAT DATA

void FloatData::printContent() const
{
    std::cout<<value;
}

Data * FloatData::clone() const
{
    return new FloatData(value);
}

bool FloatData::isEqual(const Data &dataValue)
{
    const FloatData * dataPtr = dynamic_cast<const FloatData*>(&dataValue);

    if( dataPtr )
    {
        if(dataPtr->value == value)
            return true;
    }

    return false;
}

FloatData::~FloatData()
{
    std::cout<<"~FloatData()"<<std::endl;
}
