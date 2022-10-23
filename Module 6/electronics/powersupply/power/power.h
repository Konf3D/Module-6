#pragma once
#include <string>
#include "../../../iParams/iParams.h"
enum class PowerType{
	AC, DC
};
class Battery
{
private:
	double _chargePercentage;
public:
	Battery() = default;
	~Battery() = default;
public:
	void addCharge(const double charge);
	double getCharge() const;
};
class PowerSupplySpecifications
{
private:
	const PowerType _currentType;
	const double _currentVoltage;
	const double _currentAmperage;

public:
	PowerSupplySpecifications() = delete;
	PowerSupplySpecifications(const PowerType currentType, const double currentVoltage, const double currentAmperage);
	virtual ~PowerSupplySpecifications() = default;

public:
	PowerType getCurrentType() const;
	double getCurrentVoltage() const;
	double getCurrentAmperage() const;
	friend std::ostream& operator<<(std::ostream& os,const PowerSupplySpecifications& lhs);
};

class PowerSupply : public iParams
{
private:
	const PowerSupplySpecifications _input;
	const PowerSupplySpecifications _output;
public:
	PowerSupply() = delete;
	PowerSupply(const PowerSupplySpecifications& input, const PowerSupplySpecifications& output);
public:
	virtual ~PowerSupply() = default;
	virtual void displaySpecifications() const;
	PowerSupplySpecifications getInputSpecifications() const;
	PowerSupplySpecifications getOutputSpecifications() const;
};