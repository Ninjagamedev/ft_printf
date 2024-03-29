/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:09:35 by alalmeid          #+#    #+#             */
/*   Updated: 2024/02/19 19:01:08 by alalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Escreve a string s no file descriptor fd

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
