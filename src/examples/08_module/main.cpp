#include "temperature_data.h"

int main() 
{
	//write_to_file();
	//read_from_file();
	std::vector<Temperature> out_temps
	{
		Temperature(1, 98.9), Temperature(2, 99.9), Temperature(3, 98.7),
		Temperature(4, 99.1), Temperature(5, 99.5), Temperature(6, 99.6)
	};

	TemperatureData data;
	data.save_temps(out_temps);

	std::vector<Temperature> in_temps = data.get_temps();

	for(auto temp: in_temps)
	{
		std::cout<<temp.get_hour()<<" "<<temp.get_reading()<<"\n";
	}

	return 0;
}