#include "phone.h"
#include <iostream>

Phone::Phone(const ACAdapter& adapter, const std::string& modelName, const std::string& manufacturer)
	:ACAdapter(adapter),_modelName(modelName),_manufacturer(manufacturer)
{
}

void Phone::displaySpecifications() const
{
	std::cout << "Displaying the phone parameters\n" << "Manufacturer = " << _manufacturer << "\nModel = " << _modelName << '\n';
}