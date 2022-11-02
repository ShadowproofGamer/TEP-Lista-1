#pragma once
#include <iostream>
//#include "CTable.cpp"
#ifndef CTABLE
#define CTABLE





class CTable {
private:
	std::string s_name;
	int table_size;
	int* content;
public:
	CTable();
	CTable(std::string sName, int iTableLen);
	CTable(const CTable& pcOther);
	~CTable();
	void vSetName(std::string sName);
	bool bSetNewSize(int iTableLen);
	CTable* pcClone();
	int getContent(int id);
	void setContent(int id, int element);
	int getLength();
};
void v_mod_tab(CTable* pcTab, int iNewSize);
void v_mod_tab(CTable cTab, int iNewSize);
#endif //CTABLE
;