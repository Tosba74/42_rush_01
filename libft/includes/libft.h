/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:58:17 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/20 18:01:48 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define SUCCESS 0
# define FAILURE 1

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
**                  BASICS FUNCTIONS
*/
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, const char *base);
int					ft_check_base(const char *base);
int					ft_isspace(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strdup(const char *s1);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t dstsize);
char				*ft_strncat(char *dst, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_memdel(void *ap);
/*
**                  ADD FUNCTIONS
*/
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free(char const *s1, char const *s2, int sp);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				**ft_split_whitespaces(char const *s);
int					ft_norm_all(void **s, size_t count, size_t size);
int					ft_putchar_len(char c);
int					ft_len_num(long n, int b);
int					ft_putnbr_len(int n);
int					ft_len_itoa(int n, int b);
int					ft_itoa_base_len(char *result, int n, const char *base);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, const char *base);
char				*ft_utoa_base(unsigned int n, const char *base);
char				*ft_ulltoa_base(unsigned long long ull, char *base);
char				*ft_hexa(int n, const char *base);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putstr_len(char *s, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_base(int n, char *base);
void				ft_putendl_fd(char *s, int fd);
/*
**                  BONUS FUNCTIONS
*/
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstlast(t_list *lst);
/*
**					GNL
*/
int					get_next_line(int fd, char **line);

#endif
