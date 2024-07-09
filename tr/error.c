#include "philo.h"

int	errors(int	err)
{
	if (err == 0)
		write(2,"Number of args is invalid!\n", 27);
	if (err == 1)
		write(2,"Error while creating threads!\n", 30);
	if (err == 2)
		write(2, "Args are not valid!\n", 19);
	if (err == 3)
		write(2, "Error while starting mutex!\n", 28);
	return (1);
}


