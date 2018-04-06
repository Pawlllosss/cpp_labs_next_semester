#ifndef DataH
#define DataH
#include <string>
#include <iostream>

class Data
{
public:
    virtual void printContent() const = 0;
    virtual Data * clone() const = 0;
    virtual bool isEqual(const Data &dataValue) = 0;
    virtual ~Data(){}
private:
};

class IntData: public Data
{
public:
    IntData(const int valueToSet) : value(valueToSet){}
    void printContent() const;
    Data * clone() const;
    bool isEqual(const Data &dataValue);
    ~IntData();
private:
    int value;
};

class StringData: public Data
{
public:
    StringData(const std::string valueToSet) : value(valueToSet){}
    void printContent() const;
    Data * clone() const;
    bool isEqual(const Data &dataValue);
    ~StringData();
private:
    std::string value;
};

class FloatData: public Data
{
public:
    FloatData(const float valueToSet) : value(valueToSet){}
    void printContent() const;
    Data * clone() const;
    bool isEqual(const Data &dataValue);
    ~FloatData();
private:
    float value;
};
#endif
