//temperature_data.cpp
#include "temperature_data.h"

void TemperatureData::save_temps(const std::vector<Temperature>& temps)
{
    std::ofstream out_file;
    out_file.open(file_name);

    for(auto temp: temps)
    {
        out_file<<temp.get_hour();
        out_file<<" ";
        out_file<<temp.get_reading();
        out_file<<"\n";
    }

    out_file.close();
}

std::vector<Temperature> TemperatureData::get_temps()
{
    std::vector<Temperature> temps;
        
    std::ifstream in_file;
    in_file.open(file_name);

    int hour;
    double reading;

    if(in_file.is_open())
    {
        while(in_file>>hour>>reading)
        {
            Temperature temp(hour, reading);
            temps.push_back(temp);
        }
    }

    in_file.close();
    return temps; 
}