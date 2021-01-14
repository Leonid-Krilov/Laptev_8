#include "Menu.h"

void Menu::print_menu()
{
	working_with_a_file file;

	cout << "\nRandom numbers will be entered into the first file";
	file.Input();
	cout << "\n\t\t\t\tLoading 99%...........\n\n";
	file.Output();
	cout << "\nYour answer is into the second file";
	cout << "\n :)";



}

