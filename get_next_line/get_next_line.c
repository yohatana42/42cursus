/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:59:40 by yohatana          #+#    #+#             */
/*   Updated: 2024/06/07 15:49:44 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

// typedef struct s_string
// {
// 	char	*line;
// 	int		char_count;
// 	char	*new_line;
// }	t_string;

static int	get_char(int fd, t_string *string_p);
static char	*create_line(int fd, t_string *string_p);
static void	free_all(t_string *string_p);

char	*get_next_line(int fd)
{
	char			*buf;
	int				read_result;
	static t_string	string;
	t_string		*string_p;

	if (fd < 0)
		return (NULL);
	string_p = &string;
	buf = create_line(fd, string_p);
	printf("buf %s\n", buf);
	return (buf);
}

static int	get_char(int fd, t_string *string_p)
{
	int	read_result;
	static char buf[BUFFER_SIZE];
	static char *bufp;
	static int n = 0;

	//  前回のreadで読み込んだ文字数が３文字の場合、bufpには未だ２文字残っている
	// ので未だ読み込みたくない
	if (n == 0)
	{
		n = read(fd, buf, BUFFER_SIZE);
		// bufp は毎回読み込んだバッファサイズ分しか入らない
		bufp = buf;
	}

	printf("bufp %s\n", bufp);

	if (n < 0)
		return (ERROR);
	// 一文字でも読み込めたら1文字ずつ返却する
	if (--n >= 0)
		return ((unsigned char) *bufp++);
	else
		return (EOF);
}

static char	*create_line(int fd, t_string *string_p)
{
	char		read_char;
	static char	*line;

	line = (char *)malloc(BUFFER_SIZE * sizeof(char) * 2);
	if (!line)
		return (NULL);
	ft_memset(line, 0, BUFFER_SIZE * sizeof(char) * 2);
		read_char = get_char(fd, string_p);
		if (read_char == ERROR)
		{
			free_all(string_p);
			return (NULL);
		}
		*line++ = read_char;
		// line = ft_strjoin(line, &read_char);
		// printf("line %s\n", --line);

	// else if (read_char == EOF)
	// 	printf("read_char %s\n", read_char);
	// else if (read_char == '\n')
	// 	printf("read_char %s\n", read_char);

	// 改行コードに当たるまで呼び出す

	// 改行コードの場合
	// EOF
	// エラー
	printf("line %s\n",line);
	return (line);
}

static void	free_all(t_string *string_p)
{
	// マロックしたやつ全部フリーする
}
