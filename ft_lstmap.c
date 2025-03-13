/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:27:07 by psmolin           #+#    #+#             */
/*   Updated: 2025/03/13 19:43:14 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		content = f(lst->content);
		new = ft_lstnew(content);
		if (!new)
		{
			del (content);
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*temp;
// 	t_list	*ret;
// 	t_list	*new;
// 	void	*content;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	ret = ft_lstnew(f(lst->content));
// 	if (!ret)
// 		return (NULL);
// 	lst = lst->next;
// 	temp = ret;
// 	while (lst)
// 	{
// 		content = f(lst->content);
// 		if (!content)
// 			return (ft_lstclear(&ret, del), NULL);
// 		new = ft_lstnew(content);
// 		if (!new)
// 			return (ft_lstclear(&ret, del), NULL);
// 		temp->next = new;
// 		temp = new;
// 		lst = lst->next;
// 	}
// 	return (ret);
// }

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*temp;
// 	t_list	*ret;
// 	t_list	*new;
// 	void	*content;

// 	if (!lst || !f || !del)
// 		return (NULL);
// 	content = f(lst->content);
// 	if (content)
// 		ret = ft_lstnew(content);
// 	if (!ret)
// 		return (NULL);
// 	lst = lst->next;
// 	temp = ret;
// 	while (lst)
// 	{
// 		content = f(lst->content);
// 		if (content)
// 			new = ft_lstnew(content);
// 		if (!new)
// 		{
// 			ft_lstclear(&ret, del);
// 			return (NULL);
// 		}
// 		temp->next = new;
// 		temp = new;
// 		lst = lst->next;
// 	}
// 	return (ret);
// }
