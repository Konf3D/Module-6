#include "adapter.h"
#include <iostream>

ACAdapter::ACAdapter(const PowerSupplySpecifications& input, const PowerSupplySpecifications& output, const std::string& manufacturer, const std::string& modelname)
	:PowerSupply(input,output),_manufacturer(manufacturer),_modelName(modelname)
{
}

ACAdapter::ACAdapter(const PowerSupply& powerSupplyUnit, const std::string& manufacturer, const std::string& modelName)
	:PowerSupply(powerSupplyUnit),_manufacturer(manufacturer),_modelName(modelName)
{
}

void ACAdapter::displaySpecifications() const
{
	std::cout << "Displaying the adapter parameters\n" << "Manufacturer = " << _manufacturer << "\nModel = " << _modelName << '\n';
}

std::string ACAdapter::getManufacturerName() const
{
	return _manufacturer;
}

std::string ACAdapter::getModelName() const
{
	return _modelName;
}

