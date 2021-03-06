#include "dateTime.h"

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0))
		return true;
	return false;
}

int LaterInYear(int day1, int month1, int day2, int month2)
{
	if (month1 == month2 && day1 == day2)
		return 0;
	if (month1 > month2)
		return 1;
	if (month1 < month2)
		return -1;
	if (month1 == month2)
	{
		if (day1 > day2)
			return 1;
		else
			return -1;
	}
}

int DaysInYear(int year)
{
	if (IsLeapYear(year))
		return 366;
	return 365;
}

int DaysInYearRange(int year1, int year2)
{
	int sum = 0;
	for (int i = year1; i <= year2; i++)
		sum += DaysInYear(i);
	return sum;
}

int SeconsInHours(int hours)
{
	return 3600 * hours;
}