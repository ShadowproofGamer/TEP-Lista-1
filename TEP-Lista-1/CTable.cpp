#include "CTable.h"
#include "constants.h"
#include <iostream>

//using namespace CTB;


CTable::CTable() {
	s_name = DEFAULT_NAME;
	table_size = 1;
	content = new int[table_size];
	content[0] = 0;
	std::cout << "\nbezp: '" << s_name << "'";
}
CTable::CTable(std::string sName, int iTableLen) {
	s_name = sName;
	table_size = iTableLen;
	content = new int[iTableLen];
	for (int i = 0; i < table_size; i++)
	{
		content[i] = 0;
	}
	std::cout << "\nparametr: '" << s_name << "'";
}
CTable::CTable(const CTable &pcOther) {
	s_name = pcOther.s_name + COPY_SUFFIX;
	table_size = pcOther.table_size;
	delete[] content;
	int* new_table = new int(pcOther.table_size);
	for (int i = 0; i < pcOther.table_size; i++) {
		new_table[i] = pcOther.content[i];
	}
	content = new_table;
	//content = pcOther.content;
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
	if (iTableLen <= 0) return false;
	int* new_content_table;
	new_content_table= new int[iTableLen];
	for (int i = 0; i < iTableLen; i++)
	{
		if (i >= table_size) new_content_table[i] = 0;
		else new_content_table[i] = content[i];
	}
	content = new_content_table;
	table_size = iTableLen;
	return true;
}
CTable* CTable::pcClone() {
	CTable* new_table = new CTable(s_name, table_size);
	delete[] new_table->content;
	int* new_content = new int(table_size);
	for (int i = 0; i < table_size; i++)
	{
		new_content[i] = content[i];
	}
	new_table->content = new_content;
	return new_table;
}
int CTable::getContent(int id) {
	if (id >= (table_size)) return 0;
	else return content[id];
}

void CTable::setContent(int id, int element) {
	if (id >= (table_size)) return;
	else content[id] = element;
}

int CTable::getLength() {
	return table_size;
}
	
void v_mod_tab(CTable* pcTab, int iNewSize) {
	pcTab->bSetNewSize(iNewSize);
}

void v_mod_tab(CTable cTab, int iNewSize) {
	cTab.bSetNewSize(iNewSize);
}
