#include "CTable.h"
#include <iostream>
//using namespace CTB;

class CTable {
public:
	std::string s_name;
	int table_size;
	int* content;
	CTable() {
		s_name = "defTable";
		table_size = 1;
		content = new int[table_size];
		std::cout << "\nbezp: '" << s_name << "'";
	}
	CTable(std::string sName, int iTableLen) {
		s_name = sName;
		table_size = iTableLen;
		content = new int[table_size];
		std::cout << "\nparametr: '" << s_name << "'";
	}
	CTable(const CTable &pcOther) {
		s_name = pcOther.s_name + "_copy";
		content = pcOther.content;
		std::cout << "\nkopiuj: '" << s_name << "'";
	}
	~CTable() {
		delete[] content;
		std::cout << "\nusuwam: '" << s_name << "'";
	}
	void vSetName(std::string sName) {
		s_name = sName;
	}
	bool bSetNewSize(int iTableLen) {
		int* new_content_table = new int[iTableLen];
		for (int i = 0; i < table_size; i++)
		{
			new_content_table[i] = (int)content[i];
		}
		return true;
	}
	CTable* pcClone() {
		CTable* newTable = new CTable();
		newTable->content = content;
		newTable->s_name = s_name;
		return newTable;
	}
};
