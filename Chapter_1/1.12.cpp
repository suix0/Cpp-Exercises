/* Assume a vendor sells 5553 grams of grocery in 2 hours, 
9 minutes and 30 seconds. Write a program that displays the average sale in kilograms 
per hour (Note that 1 kilogram is 1000 grams). */
#include <iostream>

int main(){
	// Convert the time to seconds
	// 2 hours, 9 minutes and 30 seconds is 7770 seconds
	int totalSeconds = 7770;

	// Define the total grams per 2 hrs, 9 mins, and 30 secs
	int grams = 5553;

	// Convert the average grams sold per 7770 seconds to per 1 second
	double totalGramsPerSecond = totalSeconds / grams;

	// Calculate the average grams per hour using the total grams per seconds
	double totalGramsPerHour = totalGramsPerSecond * 3600.0; // 1 hour is 3600 sseconds
	
	// Convert to KG
	double totalKilogramsPerHour = totalGramsPerHour / 1000.0; 
	
	std::cout << "\n5553 grams of grocery in 2 hours, 9 minutes and 30 seconds." << std::endl;
	std::cout << totalKilogramsPerHour << " kilograms will be sold per hour on average." << std::endl;
}