/*
 * Name        : temperature.h
 * Author      : Brian Lee
 * Description : Class Header File
 */

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

// ADD HEADER GUARD HERE
#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

/*
 * Class Temperature.
 * A class that converts temperatures. It will always internally store the value
 * in kelvin.
 */
class Temperature {
 public:
  /*
   * Constructor #1.
   * Sets kelvin to 0
   */
  Temperature(){
    kelvin_=0;
  };

  /*
   * Constructor #2.
   * Sets kelvin to the supplied value
   * @param double kelvin - The value to set the internal kelvin to
   */
  Temperature(double kelvin){
    kelvin_ = kelvin;
  }

  /*
   * Constructor #3.
   * Converts the supplied temperature to kelvin and internally stores it.
   * The temperature's unit will be provided in the second argument.
   * If the second argument is not value (i.e. not 'F' or 'C') assume the
   * temperature is in kelvin
   * @param double temp - The value to set the internal kelvin to once
   *                    - converted.
   * @param char unit - The type of unit temp is. Will be either 'F' or 'C',
   *                    case-insensitive
   */
  Temperature(double temp, char unit){
    temp = kelvin_;
    if (unit != 'F' || 'C'){
      temp = kelvin_;
    }
  }

  /*
   * The temperature will come in as kelvin and this function will set the
   * internal temp to this value
   * @param double kelvin - The value to set the internal kelvin to.
   */
  void SetTempFromKelvin(double kelvin){
    kelvin_ = kelvin;
  }


  /*
   * The temperature will come in as Celsius and this function will set the
   * internal temp to this value, once converted to kelvin
   * Formula: k = c + 273.15
   * @param double celsius - The value (in celsius) to set the internal kelvin
   *                       - to.
   */
  void SetTempFromCelsius(double celsius){
    kelvin_ = celsius + 273.15;
  }


  /*
   * The temperature will come in as Fahrenheit and this function will set the
   * internal temp to this value, once converted to kelvin
   * Formula: k = (5.0 * (f - 32) / 9) + 273.15
   * @param double fahrenheit - The value (in fahrenheit) to set the internal
   *                          - kelvin to.
   */
  void SetTempFromFahrenheit(double fahrenheit){
    kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273.15;
  }

  /*
   * Gets the internal temperature in Kelvin.
   * @return double - The temperature in Kelvin
   */
  double GetTempAsKelvin() const{
    return kelvin_;
  }

  /*
   * Returns the internal temp converted to Celsius
   * Formula: k - 273.15
   * @return double - The temperature in Celsius
   */
  double GetTempAsCelsius() const{
   double celsius = kelvin_ - 273.15;
    return celsius;
  }

  /*
   * Returns the internal temp converted to Fahrenheit
   * Formula: ((c * 9.0) / 5) + 32;
   * @return double - The temperature in Fahrenheit
   */
  double GetTempAsFahrenheit() const{
    double fahrenheit = kelvin_ * 9.0 / 5 + 32;
    return fahrenheit;
  }

  /*
   * Get a string representation of the temperature.
   * The string will be formatted as:
   * "TEMP UNIT"
   * where TEMP is the temperature to 2 decimal places and UNIT is either
   * "Kelvin", "Celsius", or "Fahrenheit".
   * The conversion to perform is denoted by the parameter.
   * If the unit given through the argument is invalid, set the string to:
   * "Invalid Unit"
   * @uses stringstream
   * @param char unit - The conversion to perform, either 'K', 'C' or 'F',
   *                    defaults to 'K' and is case-insensitive
   * @return string - A string representation of the temperature or invalid if
   *                  the provided unit is not recognized
   */
  string ToString(char unit = 'K') const;

 private:
  double kelvin_;
};

// REST OF HEADER GUARD GOES HERE
#endif //TEMPERATURE_H_