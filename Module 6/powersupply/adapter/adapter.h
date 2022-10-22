#pragma once
#include "../power/power.h"
class ACAdapter : public PowerSupply
{
private:
	std::string _manufacturer;
	std::string _modelName;
public:
	virtual void displaySpecifications() const override;
};