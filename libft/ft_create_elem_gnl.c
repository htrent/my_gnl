/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem_gnl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrent <htrent@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:47:00 by htrent            #+#    #+#             */
/*   Updated: 2019/09/17 16:47:43 by htrent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnl_list	*ft_create_elem_gnl(char data, int fd)
{
	t_gnl_list *list;

	list = (t_gnl_list *)malloc(sizeof(t_gnl_list));
	list->next = NULL;
	list->data = data;
	list->fd = fd;
	return (list);
}
