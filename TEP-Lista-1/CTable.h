#pragma once
#include <iostream>
//#include "CTable.cpp"
//#ifdef CTABLE_H;
//#define CTABLE_H;




//namespace CTB {
	class CTable {
	public:
		std::string s_name;
		int table_size;
		int* content;
		//public:
		CTable();
		CTable(std::string sName, int iTableLen);
		CTable(const CTable &pcOther);
		~CTable();
		void vSetName(std::string sName);
		bool bSetNewSize(int iTableLen);
		CTable* pcClone();
	};
//}
//#endif CTABLE_H
