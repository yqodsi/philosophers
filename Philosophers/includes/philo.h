#ifndef PHILO_H
#define PHILO_H
# include <pthread.h>

typedef struct s_philo
{
	int	philos;
	int	tdie;
	int	teat;
	int	tsleep;
	int times;
}				t_philo;

#endif