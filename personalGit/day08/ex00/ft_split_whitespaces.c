/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:59:41 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/17 21:42:32 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int count;

	count = 1;
	while (*str)
	{
		if ((*str == ' ') || (*str == '\t') || (*str == '\r'))
			count++;
		str++;
	}
	printf("word count %i\n", count);
	return (count);
}

int		param_length(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	copy_word(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while ((*src) && ((*src != ' ') || (*src != '\t') || (*src != '\r')))
	{
		*temp = *src;
		temp++;
		src++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int wordCount;
	char *temp; 
	int *wordlength;
	char **sentence;
	int j;
	int i;

	i = 0;
	temp = str;
	sentence = NULL;
	wordCount = count_words(str);
	wordlength = (int*)malloc(sizeof(*wordlength) * (wordCount + 1));
	printf("Before first While\n");
	if ((*temp == ' ') || (*temp == '\t') || (*temp == '\r')) 
		temp++;
	while ( i < wordCount)
	{
		j = 0;
		while ((*temp != ' ') || (*temp != '\t') || (*temp != '\r'))
		{
			j++;
			printf("Finite?, %i\n", j);
			temp++;
		}
		wordlength[i] = j;
		temp++;
		i++;
		printf("Word %i is %i characters long\n", i, wordlength[i]);
	}
	i = 0; 
	
	while ( i < wordCount)
	{
		printf("Word %i is %i characters long\n", i, wordlength[i]);	
		i++; 
	}
	temp = str;
	printf("Before Second While\n");
	printf("String is %s\n", temp);
	printf("Word Count is %i\n", wordCount);
	while (i < wordCount)
	{
		j = 0;
		printf("Word %i is %i characters long\n", i, wordlength[i]);
		sentence[i] = (char*)malloc(sizeof(*sentence[i]) * (wordlength[i]));
		printf("Are you breaking here?\n");
		copy_word(sentence[i], temp);
		while (j < wordlength[i])
		{
			j++;
			temp++;
		}
		i++; 
	}
	printf("Before Return\n");
	return sentence;
}
