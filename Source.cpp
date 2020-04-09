#include <iostream>
//other file name
#include "ShippingEquipment.h"
//other file name
#include "SetupArea.h"


using namespace std;

//Prototype



int main()
{
	//title
	cout << "\n\n\t\t **** Corona **** \n\n";

	SetupALockdownArea();
	SetupATesingStation();
	SetupAQuarantineArea();
	SetupFemaHospital();
	ShipMasksToAHospital();
	ShipFaceShieldsToHospital();
	ShipVentsToHospital();


	return 0;
}

