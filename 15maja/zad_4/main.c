#include <stdio.h>
#include <stdlib.h>

struct WeatherInfo{
    float temperature;
    float humidity;
    float windSpeed;

};


int main()
{
    struct WeatherInfo pogoda1 = {5.6f,61.6f,14.6f};
    struct WeatherInfo pogoda2 = {12.2f,45.6f,9.4f};
    struct WeatherInfo pogoda3 = {24.5f,20.5f,2.7f};
    printf("%f",pogoda1.humidity);
    return 0;
}
