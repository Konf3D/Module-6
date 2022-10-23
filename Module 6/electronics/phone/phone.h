#pragma once
#include "../electronicdevice.h"
class Phone : public ACAdapter,public Battery
{
private:
	const std::string _modelName;
	const std::string _manufacturer;
public:
	Phone() = delete;
	Phone(const ACAdapter& adapter, const std::string& modelName, const std::string& manufacturer);
	virtual ~Phone() = default;
public:
	virtual void displaySpecifications() const;

};