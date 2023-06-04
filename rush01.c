/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acapdevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:06:51 by acapdevi          #+#    #+#            */
/*   Updated: 2023/06/04 23:18:48 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char character);

void	print_error(char *message, int msg_length);

void	column(int col, char corner, char middle, char final)
{
	int		count_col;

	count_col = 1;
	while (count_col <= col)
	{
		if (count_col == 1)
			ft_putchar(corner);
		else if (count_col == col)
			ft_putchar(final);
		else
			ft_putchar(middle);
		count_col++;
	}
}

void	rush(int width, int height)
{
	int	count_line;

	if (width < 1 || height < 1)
	{
		print_error("error, invalid input\n", 21);
		return ;
	}
	count_line = 1;
	{
		while (count_line <= height)
		{
			if (count_line == 1)
				column(width, '/', '*', '\\');
			else if (count_line == height)
				column(width, '\\', '*', '/');
			else
				column(width, '*', ' ', '*');
			count_line++;
			ft_putchar('\n');
		}
	}					
}
