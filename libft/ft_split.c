/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucipol- <lucipol-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:13:21 by lucipol-          #+#    #+#             */
/*   Updated: 2025/05/14 20:00:04 by lucipol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words; //count the number of words in our string 
	int	in_word; //flag to kwow if we are in a word

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word) //if we found a character that is not a delimitator and we are not in a word
		{
			in_word = 1;//we count that we are in a word
			words++;//we increase our counter
		}
		else if (*s == c) //if we found our delimitator
			in_word = 0; //our counter backs again to zero, it means that we are not in a word
		s++; //go to the next character
		}
		return (words); //return the total number of words
}

static char	*get_next_word(char const **s, char c)
{
    char const	*start; //pointer to the start of the word
    char	*word; // pointer to the extracted word
    size_t	len; // len of the word

    while (**s == c && **s != '\0')
	    (*s)++;
	start = *s; //guarda la posicion donde se encuentra la palabra 
	while (**s != '\0' && **s != c) //mientras no se encuentre el delimitador ni el caracter nulo
		(*s)++; //seguimos avanzando
	len = *s - start; 
	if (len == 0)
		return (NULL);//nos da la longuitud, es decir, resta la posicion de start y la posicion actual de *s
	word = malloc(len + 1); //guardamos la posicion de la palabra + 1 (caracter nulo)
	if (!word)
		return(NULL); //encuentra fallos en la asignacion de memoria 
	ft_memcpy(word, start, len); //copy the word
	word[len] = '\0'; //añade el caracter nulo al final de la cadena
	return(word); //devuelve la nueva cadena creadaa
}

static void	free_all(char **result, int i)
{
	while (i-- > 0)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int	total_words;
	int	i;

	total_words = 0;
	if (!s)
		return (NULL);
	
	total_words = count_words(s, c);
	result = malloc(sizeof(char *) * (total_words + 1));
	if (!result)
		return(NULL);
    
	i = 0;
	while (i < total_words)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return(result);
}

int main() 
{
    char **tab = ft_split("  hola   mundo  ", ' ');
    if (!tab) {
        printf("Error\n");
        return 1;
    }

    for (int i = 0; tab[i]; i++) {
        printf("[%d]: \"%s\"\n", i, tab[i]);
    }

    free_all(tab, 2);  // Liberar memoria
    return 0;
}
