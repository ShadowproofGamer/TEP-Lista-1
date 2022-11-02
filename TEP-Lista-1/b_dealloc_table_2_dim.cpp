#include <iostream>
#include "table_functions.h"
//function ex3
bool b_dealloc_table_2_dim(int*** piTable, int iSizeX, int iSizeY) {
	if (iSizeX <= 0 || iSizeY <= 0)
	{
		return false;
	}

	for (int i = 0; i < iSizeX; i++)
	{
		delete[] (*piTable)[i];
	}
	delete[] (*piTable);
	//*piTable = nullptr;

	return true;
}