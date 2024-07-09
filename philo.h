#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <pthread.h>

typedef struct s_philo
{
	int			id;
	int			x_ate;
	int			left_fork;
	int			right_fork;
	long long	last_meal;
	struct s_rules	*rules;
	pthread_t	thread_id;
}	t_philo;

typedef struct s_rules
{
	int	num_philo;
	int	death_time;
	int	eat_time;
	int	sleep_time;
	int	num_eat;
	int	died;
	int	all_ate;
	long long	first_timestamp;
	pthread_mutex_t	check_meal;
	pthread_mutex_t	forks[250];
	pthread_mutex_t	writing;
	t_philo	philos[250];
}	t_rules;

//init.c

//utils.c
int	ft_atoi(const char *str);
long long	timestamp(void);
long long	time_diff(long long past, long long present);

//launch.c

//error.c
int	errors(int	err);


# endif