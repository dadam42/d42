/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42header.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 00:32:47 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 20:25:57 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define defuser "2ndclarg"
#define defemail "3rd@cl.arg"
#define deffilename "1stclarg"

void get_email(char **email, int *argc, char **argv)
{
	char *maybe;
	while (1)
	{
		if ((*argc > 1)
			&& (ft_strlen(argv[1]) > 0))
		{
			(*argc)--;
			*email = argv[1];
			break;
		}
		maybe = getenv("MAIL");
		if (maybe && (ft_strlen(maybe) > 0))
		{
			*email = maybe;
			break;
		}
		*email = defemail;
		break;
	}
}
void get_user(char **user, int *argc, char **argv)
{
	char *maybe;
	while (1)
	{
		if ((*argc > 1)
			&& (ft_strlen(argv[1]) > 0))
		{
			(*argc)--;
			*user = argv[1];
			break;
		}
		maybe = getenv("USER");
		if (maybe && (ft_strlen(maybe) > 0))
		{
			*user = maybe;
			break;
		}
		*user = defuser;
		break;
	}
}

void get_filename(char **filename, int *argc, char **argv)
{
	char *maybe;

	while (1)
	{
		if ((*argc > 1)
			&& (ft_strlen(argv[1]) > 0))
		{
			(*argc)--;
			*filename = argv[1];
			break;
		}
		maybe = getenv("D42FILENAME");
		if (maybe && (ft_strlen(maybe) > 0))
		{
			*filename = maybe;
			break;
		}
		*filename = deffilename;
		break;
	}
}

void get_time(char *strtime)
{
	time_t t = time(NULL);
	struct tm st = *localtime(&t);
	sprintf(strtime, "%d/%02d/%02d %02d:%02d:%02d", st.tm_year + 1900, st.tm_mon
					, st.tm_mday, st.tm_hour, st.tm_min, st.tm_min);
}

int main(int argc, char **argv)
{
	char* header[11] =
	{
"/* ************************************************************************** */\n", 
"/*                                                                            */\n", 
"/*                                                        :::      ::::::::   */\n", 
"/*   %-51s:+:      :+:    :+:   */\n", 
"/*                                                    +:+ +:+         +:+     */\n", 
"/*   By: %8.8s %-34s+#+  +:+       +#+        */\n", 
"/*                                                +#+#+#+#+#+   +#+           */\n", 
"/*   Created: %-41s#+#    #+#             */\n", 
"/*   Updated: %-40s###   ########.fr       */\n", 
"/*                                                                            */\n", 
"/* ************************************************************************** */\n",
	};

	int cur = 0;
	char buffer_time[19];
	char buffer40[40];
	char bufferemail[34];
	char bufferline[80];
	char *email;
	char *user;
	char *filename;

	get_filename(&filename, &argc, argv);
	get_user(&user, &argc, argv);
	get_email(&email, &argc, argv);
	get_time(buffer_time);
	sprintf(buffer40, "%s by %s", buffer_time, user);
	while (cur < 3)
		printf("%s", header[cur++]);
	sprintf(bufferline, header[3], filename);
	printf("%s", bufferline);
	printf("%s", header[4]);
	sprintf(bufferemail, "<%s>", email);
	sprintf(bufferline, header[5], user, bufferemail);
	printf("%s", bufferline);
	printf("%s", header[6]);
	cur = 7;
	while (cur < 9)
	{
		sprintf(bufferline, header[cur++], buffer40);
		printf("%s", bufferline);
	}
	while (cur < 11)
	{
		printf("%s", header[cur++]);
	}
	printf("\n");
}
