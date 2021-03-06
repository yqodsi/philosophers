/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:15:23 by yqodsi            #+#    #+#             */
/*   Updated: 2021/09/12 16:33:05 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <pthread.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <time.h>
# include <math.h>

# define SUCCESS 0
# define ERROR 1

# define FALSE 0
# define TRUE 1

# define THINKINK 0
# define RFORK 1
# define LFORK 2
# define EATING 4
# define SLEEPING 8
# define DEATH 16

typedef struct s_philo
{
	int				id;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	int				eat_counter;
	int				full;
	long			last_time_eat;
	void			*mem;
}	t_philo;

typedef struct s_mem
{
	pthread_t		philos_threads[200];
	pthread_mutex_t	forks[200];
	t_philo			philo[200];
	int				philosophers_count;
	pthread_mutex_t	full_lock;
	pthread_mutex_t	write;
	pthread_mutex_t	stop;
	struct timeval	t0;
	int				option_specified;
	long int		time_to_sleep;
	long int		eating_count;
	pthread_mutex_t	total_eating_counter;
	long int		time_to_die;
	long int		time_to_eat;
}	t_mem;

/*
** libft functions
*/

void			*ft_memset(void *s, int c, size_t len);
long int		ft_atoi(const char *str);

/*
** functions prototypes
*/

long unsigned	current_time(t_mem *mem);
void			parse(int ac, char **av, t_mem *mem);
void			ft_exit(t_mem mem, char *error_msj);
void			init(t_mem *mem);
void			clean_simulation(t_mem *mem, int status);
void			get_first_time(t_mem *mem);
void			get_first_time(t_mem *mem);
void			print_status(t_philo *philo, int status);
void			*check_death(void *arg);
void			*routine(void *arg);
void			init_simulation(t_mem *mem);

#endif