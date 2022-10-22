#pragma once
#include <string>

enum class PowerType{
	AC, DC
};

class PowerSupplySpecifications
{
private:
	const PowerType _currentType;
	const double _currentVoltage;
	const double _currentAmperage;

public:
	PowerSupplySpecifications() = delete;
	PowerSupplySpecifications(PowerType currentType, double currentVoltage, double currentAmperage);
	virtual ~PowerSupplySpecifications();

public:
	PowerType getCurrentType() const;
	double getCurrentVoltage() const;
	double getCurrentAmperage() const;
};

class PowerSupply
{
private:
	PowerSupplySpecifications _input;
	PowerSupplySpecifications _output;
public:
	PowerSupply() = delete;
	PowerSupply(const PowerSupplySpecifications input, const PowerSupplySpecifications output);
	virtual void displaySpecifications() const = 0;
};