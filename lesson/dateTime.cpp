#include "dateTime.h"

//провер€ющую год на високосность
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0))
		return true;
	return false;
}

//количество секунд в минуте.
int SecondsInMinute()
{
	return 60;
}