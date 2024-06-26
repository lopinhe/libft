/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsasse <lsasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:26:19 by lsasse            #+#    #+#             */
/*   Updated: 2023/11/30 15:25:03 by lsasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 9 || n < -9)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putchar_fd('0' + n % 10 * ((n > 0) - (n < 0)), fd);
}
