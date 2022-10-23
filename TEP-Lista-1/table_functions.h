#pragma once
#ifndef table_functions
#define table_functions


bool b_alloc_table_2_dim(int*** piTable, int iSizeX, int iSizeY);
bool b_dealloc_table_2_dim(int*** piTable, int iSizeX, int iSizeY);
void v_alloc_table_fill_34(int iSize);

#endif //table_functions