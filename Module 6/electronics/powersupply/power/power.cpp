#include "power.h"
#include <iostream>
PowerSupplySpecifications::PowerSupplySpecifications(const PowerType currentType, const double currentVoltage, const double currentAmperage)
	:_currentType(currentType), _currentVoltage(currentVoltage),_currentAmperage(currentAmperage)
{
}

PowerType PowerSupplySpecifications::getCurrentType() const
{
	return _currentType;
}

double PowerSupplySpecifications::getCurrentVoltage() const
{
	return _currentVoltage;
}

double PowerSupplySpecifications::getCurrentAmperage() const
{
	return _currentAmperage;
}

PowerSupply::PowerSupply(const PowerSupplySpecifications& input, const PowerSupplySpecifications& output)
	:_input(input),_output(output)
{
}

std::ostream& operator<<(std::ostream& os, const PowerSupplySpecifications& lhs)
{
	os << "Displaying a power supply parameters\n" << "\nCurrent Type = " << ((lhs._currentType == PowerType::AC) ? "AC\n" : "DC\n") << "Current Voltage = " << lhs._currentVoltage << "\nCurrentApmerage = " << lhs._currentAmperage;
	return os;
}

void PowerSupply::displaySpecifications() const
{
	std::cout << std::endl << _input << std::endl << _output << std::endl;
}

PowerSupplySpecifications PowerSupply::getInputSpecifications() const
{
	return _input;
}

PowerSupplySpecifications PowerSupply::getOutputSpecifications() const
{
	return _output;
}

void Battery::addCharge(const double charge)
{
	_chargePercentage += charge;
	if (_chargePercentage > 100)
		_chargePercentage = 100;
}

double Battery::getCharge() const
{
	return _chargePercentage;
}

