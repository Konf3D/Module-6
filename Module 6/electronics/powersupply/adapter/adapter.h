#pragma once
#include "../power/power.h"
class ACAdapter : public PowerSupply
{
private:
	std::string _manufacturer;
	std::string _modelName;
	int64_t _serialNumber;
	int64_t _SNCounter;
public:
	ACAdapter() = delete;
	ACAdapter(PowerSupplySpecifications& input, PowerSupplySpecifications& output, std::string& manufacturer, std::string& modelname);
	ACAdapter(PowerSupply& powerSupplyUnit, std::string& manufacturer, std::string& modelName);
	virtual ~ACAdapter() = default;
public:
	virtual void displaySpecifications() const;
	std::string getManufacturerName() const;
	std::string getModelName() const;
	int64_t getSerialNumber() const;
};