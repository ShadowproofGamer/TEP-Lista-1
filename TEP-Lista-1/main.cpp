#include <iostream>
#include "CTable.h"
#include "table_functions.h"
#include "constants.h"


int main() {
	
		//zad1
		int size;
		std::cout << "\nZadanie1: \n";
		std::cout << "Write table size: ";
		std::cin >> size;
		v_alloc_table_fill_34(size);


		//zad2
		int** pi_table;
		std::cout << "\nZadanie2: \n";
		std::cout << b_alloc_table_2_dim(&pi_table, 5, 3);
		//test of zad2
		pi_table[1][0] = 3;
		std::cout << "\n" << "test zad2: \nwartosc x1,y0 - " << pi_table[1][0] << "\nadres - " << pi_table;


		//zad3
		std::cout << "\nZadanie3: \n";
		std::cout << b_dealloc_table_2_dim(&pi_table, 5, 3);
		//test of zad3
		std::cout << "\n" << "test zad3: \nadres - " << pi_table;


		//zad4
		std::cout << "\n\nzadanie 4:\n";
		CTable* table1, * table2, * table3;
		table1 = new CTable();
		table2 = new CTable("tabela2", 5);
		

		
		table1->setContent(0, 1);
		table2->setContent(4,4);
		

		

		table3 = new CTable(*table2);

		

		
		std::cout << "\nt1: " << &table1 << "\nt2: " << &table2 << "\nt3: " << &table3 << "\n";
		std::cout << "\ntable1->getContent(0): " << table1->getContent(0) << "\ntable2->getContent(4): " << table2->getContent(4) << "\ntable3->getContent(4): " << table3->getContent(4);
		table2->setContent(4, 2);
		std::cout << "\ntable1->getContent(0): " << table1->getContent(0) << "\ntable2->getContent(4): " << table2->getContent(4) << "\ntable3->getContent(4): " << table3->getContent(4);

		table3->bSetNewSize(7);
		table3->setContent(6, 6);
		std::cout << "\npresize: " << table3->getContent(1);
		std::cout << "\nnew size1: " << table3->getContent(4);
		std::cout << "\nnew size2: " << table3->getContent(6);
		
		
		//testy v-mod:
		/*
		std::cout << "\ntesty v-mod:";
		CTable table4;
		v_mod_tab(table4, 3); //tworzy kopie obiektu, orygina³ bez zmiany
		std::cout << "\ndlugosc tablicy po modyfikacji 'table4': " << table4.getLength();
		v_mod_tab(&table4, 3); //modyfikuje prawidlowo
		std::cout << "\ndlugosc tablicy po modyfikacji '&table4': " << table4.getLength();
		*/
		


}



