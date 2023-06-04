/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adokhnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:49:19 by adokhnia          #+#    #+#             */
/*   Updated: 2023/06/04 23:18:06 by adokhnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char character)
{
	write (1, &character, 1);
}

void	print_error(char *message, int msg_length)
{
	write (2, message, msg_length);
}
