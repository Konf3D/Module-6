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
	virtual ~PowerSupplySpecifications() = default;

public:
	PowerType getCurrentType() const;
	double getCurrentVoltage() const;
	double getCurrentAmperage() const;
	friend std::ostream& operator<<(std::ostream& os,const PowerSupplySpecifications& lhs);
};

class PowerSupply
{
private:
	PowerSupplySpecifications _input;
	PowerSupplySpecifications _output;
public:
	PowerSupply() = delete;
	PowerSupply(const PowerSupplySpecifications& input, const PowerSupplySpecifications& output);
public:
	virtual ~PowerSupply() = default;
	virtual void displaySpecifications() const;
	PowerSupplySpecifications getInputSpecifications() const;
	PowerSupplySpecifications getOutputSpecifications() const;
};