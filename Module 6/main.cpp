#include <iostream>
#include "electronics/electronicdevice.h"
int main()
{
	PowerSupplySpecifications pss[] = {
		PowerSupplySpecifications(PowerType::DC,240,1.5),
		PowerSupplySpecifications(PowerType::AC,19,4.74) 
	};

	PowerSupply psu(pss[0], pss[1]);

	ACAdapter adapter(psu, std::string("LiteOn Electronics"), std::string("LOE-1500-15"));

	Phone phone(adapter, "Gnusmas B5 Lite", "Samsung");

	static_cast<Battery>(phone).addCharge(85);

	phone.displaySpecifications();

	static_cast<ACAdapter>(phone).displaySpecifications();

	static_cast<PowerSupply>(phone).displaySpecifications();

}