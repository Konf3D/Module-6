#include "adapter.h"
#include <iostream>

ACAdapter::ACAdapter(PowerSupplySpecifications& input, PowerSupplySpecifications& output, std::string& manufacturer, std::string& modelname)
	:PowerSupply(input,output),_manufacturer(manufacturer),_modelName(modelname)
{
}

ACAdapter::ACAdapter(PowerSupply& powerSupplyUnit, std::string& manufacturer, std::string& modelName)
	:PowerSupply(powerSupplyUnit),_manufacturer(manufacturer),_modelName(modelName)
{
}

void ACAdapter::displaySpecifications() const
{
	std::cout << "Manufacturer = " << _manufacturer << "\nModel = " << _modelName << "\nSerial Number = " << _serialNumber << '\n';
	PowerSupply::displaySpecifications();
}

std::string ACAdapter::getManufacturerName() const
{
	return _manufacturer;
}

std::string ACAdapter::getModelName() const
{
	return _modelName;
}

int64_t ACAdapter::getSerialNumber() const
{
	return _serialNumber;
}
