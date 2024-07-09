#include "philo.h"

int	init_all(t_rules *rules, char **av)
{
	rules->num_philo = ft_atoi(av[1]);
	rules->death_time = ft_atoi(av[2]);
	rules->eat_time = ft_atoi(av[3]);
	rules->sleep_time = ft_atoi(av[4]);
	rules->all_ate = 0;
	rules->died = 0;
	if (rules->num_philo <= 0 || rules->death_time < 0 || rules->eat_time < 0
		|| rules->sleep_time < 0 || rules->num_philo > 250)
			return (1);
		if (av[5])
		{
			rules->num_eat = ft_atoi(av[5]);
			if (rules->num_eat <= 0)
				return (1);
		}
	else
		rules->num_eat = -1;
}