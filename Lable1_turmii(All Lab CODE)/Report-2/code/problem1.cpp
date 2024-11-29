#include <iostream>
#include <cstring>
using namespace std;
union SensorData
{
    int temperature;
    float humidity;
    char status[10];
};

int main()
{
    union SensorData data;
    data.temperature = 98;
    cout << "The Temperature is : " << data.temperature << " deg Celsius\n";

    data.humidity = 98;
    cout << "The Humidity is : " << data.humidity << "%\n";
    strcpy(data.status, "Active");
    cout << "The status is : " << data.status << endl
         << endl;
    cout << "Check Previous Temperature value : " << data.temperature << " deg Celsius\n";
    cout << "Check Previous Humidity value : " << data.humidity << "%\n";
    return 0;
}