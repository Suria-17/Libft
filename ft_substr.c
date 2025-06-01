/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:36:42 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/31 16:30:37 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*sub;

	i = 0;
	slen = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	char const test1[] = "Howdy Ya'll";
	char *substr;

	printf("Original : %s\n", test1);

	substr = ft_substr(test1, 11, 2);
	printf("SUB : %s\n", substr);
	free(substr);
	return (0);
}*/
