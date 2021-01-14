#include "working_with_a_file.h"

working_with_a_file::working_with_a_file()
{
}

working_with_a_file::~working_with_a_file()
{
}

void working_with_a_file::Input()
{
	int randomNumber = {};
	ofstream fo;
	fo.open(this->input_file);

	for (int i = 0; i < 100; i++)
	{
		srand(static_cast<int>(time(NULL))*i);
		randomNumber = rand() % 101 + (-50);
		fo << randomNumber << endl;
	}
	fo.close();
}

void working_with_a_file::Output()
{
	int negativeNumber = {};
	std::string Buff;

	ifstream fs;
	fs.open(this->input_file);

	while (!fs.eof())
	{
		fs >> negativeNumber;
		if (negativeNumber < 0)
			break;
	}
	fs.seekg(0);

	ofstream fo;
	fo.open(this->output_file);
	for (int i = 0; i < 100; i++)
	{
		int x{};
		fs >> x;
		if (!(x % 2))
			fo << x * negativeNumber << endl;
		else
			fo << x << endl;
	}
	fo.close();
	fs.close();

}