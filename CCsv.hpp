#ifndef   CCSV_HPP
#define   CCSV_HPP

#include <string>
#include <fstream>
#include <vector>
#include <utility> // std::pair
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream

class CCsv
{
	// variable
private:
	int m_value;

	// accessor
public:
	void write_csv(std::string filename, std::vector<std::pair<std::string, std::vector<int>>> dataset);
	std::vector<std::pair<std::string, std::vector<int>>> read_csv(std::string filename);
	std::vector<std::pair<std::string, std::vector<std::string>>> str_read_csv(std::string filename);
	int main();
};

#endif // CCSV_HPP