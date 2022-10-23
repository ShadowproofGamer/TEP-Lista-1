#include "CTable.h"
#include <iostream>
//using namespace CTB;


CTable::CTable() {
	s_name = "defTable";
	table_size = 1;
	content = new int[table_size];
	std::cout << "\nbezp: '" << s_name << "'";
}
CTable::CTable(std::string sName, int iTableLen) {
	s_name = sName;
	table_size = iTableLen;
	content = new int[table_size];
	std::cout << "\nparametr: '" << s_name << "'";
}
CTable::CTable(const CTable &pcOther) {
	s_name = pcOther.s_name + "_copy";
	content = pcOther.content;
	std::cout << "\nkopiuj: '" << s_name << "'";
}
CTable::~CTable() {
	delete[] content;
	std::cout << "\nusuwam: '" << s_name << "'";
}
void CTable::vSetName(std::string sName) {
	s_name = sName;
}
bool CTable::bSetNewSize(int iTableLen) {
	int* new_content_table = new int[iTableLen];
	for (int i = 0; i < table_size; i++)
	{
		if (content[i] == NULL || i>=iTableLen) new_content_table[i]=0;
		else new_content_table[i] = (int)content[i];
	}
	return true;
}
CTable* CTable::pcClone() {
	CTable* newTable = new CTable();
	newTable->content = content;
	newTable->s_name = s_name;
	return newTable;
}
int CTable::getContent(int id) {
	if (id >= (sizeof(content))) return 0;
	else return content[id];
}

void CTable::setContent(int id, int element) {
	if (id >= (sizeof(content))) return;
	else content[id] = element;
}
	

