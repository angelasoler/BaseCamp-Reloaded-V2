/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:30:10 by asoler            #+#    #+#             */
/*   Updated: 2022/03/30 16:01:57 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0; 
	size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = src[i];
	return (dup);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "hello 42";
	char *dup = strdup(str);
	char *ftdup = ft_strdup(str);

	printf("Original Funtion: %s\n\n", dup);
	printf("Original String: %s\n\n", str);
	printf("FT Funtion: %s\n\n", ftdup);
	printf("Original Funtion adress: %p\n\n", dup);
	printf("Original String adress: %p\n\n", str);
	printf("FT Funtion adress: %p\n\n", ftdup);
}
