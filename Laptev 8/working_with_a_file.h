#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

class working_with_a_file
{
public:
	working_with_a_file();
	~working_with_a_file();

	void Input();
	void Output();

private:
	std::string input_file = "Input.txt";
	std::string output_file = "Output.txt";

};

