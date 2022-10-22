#include "power.h"
#include <iostream>
PowerSupplySpecifications::PowerSupplySpecifications(PowerType currentType, double currentVoltage, double currentAmperage)
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
	os << "\nCurrent Type = " << ((lhs._currentType == PowerType::AC) ? "AC\n" : "DC\n") << "Current Voltage = " << lhs._currentVoltage << "\nCurrentApmerage = " << lhs._currentAmperage << '\n';
}

void PowerSupply::displaySpecifications() const
{
	std::cout << _input << _output;
}

