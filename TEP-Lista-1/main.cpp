#include <iostream>
#include "v_alloc_table_fill_34.cpp"
#include "CTable.h"
//#include "CTable.cpp"
#include "b_alloc_table_2_dim.cpp"
#include "b_dealloc_table_2_dim.cpp"
//using namespace CTB;


int main() {
	//zad1
	int size;
	std::cout << "Write table size: ";
	std::cin >> size;
	v_alloc_table_fill_34(size);


	//zad2
	int** pi_table;
	std::cout << "\n\n" << b_alloc_table_2_dim(pi_table, 5, 3);
	//test of zad2
	pi_table[1][0] = 3;
	std::cout << "\n" << "test zad2: \nwartosc x1,y0 - " << pi_table[1][0] << "\nadres - " << pi_table;


	//zad3
	std::cout << "\n\n" << b_dealloc_table_2_dim(pi_table, 5, 3);
	//test of zad3
	std::cout << "\n" << "test zad3: \nadres - " << pi_table;


	//zad4
	std::cout << "\nzadanie 4:";
	CTable* table1, * table2, * table3;
	table1 = new CTable();
	table2 = new CTable("tabela2", 5);

	table1->content[0] = 1;
	table2->content[4] = 4;

	table3 = new CTable(*table2);

	std::cout << "\n" << table1->content[0] << "\n" << table2->content[4] << "\n" << table2->content[4];

	table3->bSetNewSize(7);
	table3->content[6] = 6;
	std::cout << "\npresize: " << table3->content[1];
	std::cout << "\nnew size1: " << table3->content[4];
	std::cout << "\nnew size2: " << table3->content[6];
}



