#pragma once
#include "../power/power.h"
class ACAdapter : public PowerSupply
{
private:
	std::string _manufacturer;
	std::string _modelName;
public:
	ACAdapter() = delete;
	ACAdapter(const PowerSupplySpecifications& input, const PowerSupplySpecifications& output, const std::string& manufacturer, const std::string& modelname);
	ACAdapter(const PowerSupply& powerSupplyUnit, const std::string& manufacturer, const std::string& modelName);
	virtual ~ACAdapter() = default;
public:
	virtual void displaySpecifications() const;
	std::string getManufacturerName() const;
	std::string getModelName() const;
};