/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <htrent@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:45:44 by htrent            #+#    #+#             */
/*   Updated: 2019/09/17 16:45:44 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list_fd(t_gnl_list *list, int fd)
{
	t_gnl_list *begin;

	begin = list;
	if (list == NULL)
		return ;
	while (begin)
	{
		if (begin->fd == fd)
			ft_putchar(begin->data);
		begin = begin->next;
	}
}
