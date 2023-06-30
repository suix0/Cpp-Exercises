/* Write a program that displays 
the population for each of the next five years. 
Assume the current population is 312,032,486 and one year has 365 days. */
#include <iostream>

int main(){
	// Get the number of seconds in a year
	// First, define the number of days in a year
	const int DAYS = 365;

	// Define the seconds per minute
	short int seconds_per_minute = 60;

	// Calculate seconds per hour
	short int seconds_per_hour = seconds_per_minute * 60;

	// Calculate seconds per day
	int seconds_per_day = seconds_per_hour * 24;

	// Finally, calculate seconds per year
	int seconds_per_year = seconds_per_day * DAYS;

	// Calculate and display the population in the next 5 years
	int current_population = 312032486;
	double one_birth = 7.0; // One birth per 7 seconds
	double one_death = 13.0; // One death per 13 seconds
	double one_immigrant = 45.0; // One immigrant per 45 seconds

	std::cout << "\nCurrent population is: " << current_population << std::endl;
	std::cout << "\nIn the next 5 years, population is: " << std::endl;

	for (int i = 1; i <= 5; i++) {
		current_population = current_population + (current_population / one_birth);
		current_population = current_population - (current_population / one_death);
		current_population = current_population + (current_population / one_immigrant);
		std::cout << "Year " << i << ": " << current_population << std::endl;
	}
	
}