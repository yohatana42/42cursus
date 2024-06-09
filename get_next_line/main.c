/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohatana <yohatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:14:23 by yohatana          #+#    #+#             */
/*   Updated: 2024/06/06 14:38:42 by yohatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd = open("./test.txt", O_RDONLY);
	char *result = get_next_line(fd);
	get_next_line(fd);

	// printf("|%s|\n", result);
	// result = get_next_line(fd);
	// printf("|%s|\n", result);

	// EOFに改行がある場合

	close(fd);
}
