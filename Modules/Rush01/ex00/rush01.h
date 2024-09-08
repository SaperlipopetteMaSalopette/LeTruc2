/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:32:38 by pdemont           #+#    #+#             */
/*   Updated: 2024/09/01 18:48:19 by pdemont          ###   ########.fr       */
/*   Updated: 2024/09/01 15:27:42 by fvejux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>

typedef struct s_hints
{
	int	col_up[4];
	int	col_down[4];
	int	row_left[4];
	int	row_right[4];
}	t_hints;
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_putnbr(int nb);
void	ft_init_map(int size, int map[size][size]);
void	ft_fill_hints_map(int size, int map[size][size], t_hints *hints);
void	ft_print_map(int size, int map[size][size]);
void	ft_solve_hints_in_rows(int size, int map[size][size]);
void	ft_solve_hints_in_cols(int size, int map[size][size]);
void	fill_col_from_up(int size, int map[size][size], int j,
			int values[size - 2]);
void	fill_col_from_down(int size, int map[size][size], int j,
			int values[size - 2]);
void	fill_row_from_left(int size, int map[size][size], int i,
			int values[size - 2]);
void	fill_row_from_right(int size, int map[size][size], int i,
			int values[size - 2]);
void	handle_row_hint_4(int size, int map[size][size], int i, int j);
void	handle_row_hint_1(int size, int map[size][size], int i, int j);
void	handle_row_hint_3(int size, int map[size][size], int i, int j);
void	handle_col_hint_4(int size, int map[size][size], int i, int j);
void	handle_col_hint_1(int size, int map[size][size], int i, int j);
void	handle_col_hint_3(int size, int map[size][size], int i, int j);
int		number_exists_in_row(int size, int map[size][size], int i, int nbr);
int		number_exists_in_col(int size, int map[size][size], int j, int nbr);
int		ft_solve_null_cell(int size, int map[size][size]);
int		ft_parse_input(char *str, t_hints *hints);
int		ft_parse_input(char *str, t_hints *hints);
int		ft_parse_input(char *str, t_hints *hints);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
#endif
