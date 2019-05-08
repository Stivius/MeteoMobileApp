#pragma once

#include "core/WeatherBaseApi.hpp"

class ForecastWeatherApi : public WeatherBaseApi
{
protected:
    QUrl formRequest(const QString& city) override;
    QUrl formRequest(double latitude, double longitude) override;
};
