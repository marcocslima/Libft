/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:43:50 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/10 20:38:53 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

typedef int (*f)(int);

f func_ft[7] = {&ft_isalnum, &ft_isalpha, &ft_isascii, &ft_isdigit, &ft_isprint, &ft_toupper, &ft_tolower};
f func_ctype[7] = {&isalnum, &isalpha, &isascii, &isdigit, &isprint, &toupper, &tolower};

int main() {
	int i;
	int j = 0;
	int errors = 0;
	int ret_ft;
	int ret_ctype;
	//char *funcs[7] = {"ft_isalnum", "ft_isalpha", "ft_isascii", "ft_isdigit", "ft_isprint", "ft_toupper", "ft_tolower"};

	printf("########## TESTES DAS FUNÇÕES RELATIVAS À CTYPE.H ##########\n\n");
	while (j < 256)
	{
		//printf("Teste do caractere: %c\n", j);
		for (i = 0; i < 7; ++i)
		{
			ret_ft = func_ft[i](j);
			ret_ctype = func_ctype[i](j);
			if ((ret_ft > 0 && ret_ctype == 0) || (ret_ctype > 0 && ret_ft == 0))
			{
				//printf("Erro no: %d da função %s - ft: %d - padrão: %d\n", j, funcs[i], ret_ft, ret_ctype);
				errors++;
			}
			//else
			//	printf("OK: função %s - ft: %d - padrão: %d\n", funcs[i], ret_ft, ret_ctype);
		} 
			//printf("\n---------------------------------------------------------------------------\n");
		j++;
	}
	printf("Total de erros: %d\n", errors);
	printf("########## FIM DOS TESTES DAS FUNÇÕES RELATIVAS À CTYPE.H ##########\n\n");

	//--------------------------------------------------------------FUNÇÃO FT_STRLEN	
	printf("\n----------------------------------------------------------ft_strlen\n");
	char s1[] = "";
	char s2[] = "   {{{{~~~~~~\n\t";
	char s3[] = "minha string teste.";
	char s4[] = "* ¨¨¨%44865";
	char s5[] = "?/\\ç";
	
	printf("Para a string \"%s\" de ft_strlen: %zu e de strlen: %zu\n", s1, ft_strlen(s1), strlen(s1));
	printf("Para a string \"%s\" de ft_strlen: %zu e de strlen: %zu\n", s2, ft_strlen(s2), strlen(s2));
	printf("Para a string \"%s\" de ft_strlen: %zu e de strlen: %zu\n", s3, ft_strlen(s3), strlen(s3));
	printf("Para a string \"%s\" de ft_strlen: %zu e de strlen: %zu\n", s4, ft_strlen(s4), strlen(s4));
	printf("Para a string \"%s\" de ft_strlen: %zu e de strlen: %zu\n", s5, ft_strlen(s5), strlen(s5));
	
	//--------------------------------------------------------------FUNÇÃO FT_STRDUP
	char str[] = "Testes de separ*ação de + string";
	char *p;
	printf("\n----------------------------------------------------------ft_strdup\n");
	printf("A string de ft_strdup - %s\n", ft_strdup(str));
	printf("A string de strdup - %s\n", strdup(str));
	p = ft_strdup(str);
	printf("O ponteiro de ft_strdup - %p\n", str);
	printf("O ponteiro de strdup - %p\n", p);

	//--------------------------------------------------------------FUNÇÃO FT_STRCHR
	char c_strchr = '*';
	printf("\n----------------------------------------------------------ft_strchr\n");
	printf("A string original é - %s\n", str);
	printf("O caractere referência - %c\n", c_strchr);
	printf("O retorno da ft_strchr - %s\n", ft_strchr(str, c_strchr));
	printf("O retorno da strchr - %s\n", strchr(str, c_strchr));

	//--------------------------------------------------------------FUNÇÃO FT_STRRCHR
	char c_strrchr = '+';
	printf("\n----------------------------------------------------------ft_strrchr\n");
	printf("A string original é - %s\n", str);
	printf("O caractere referência - %c\n", c_strrchr);
	printf("O retorno da ft_strrchr - %s\n", ft_strrchr(str, c_strrchr));
	printf("O retorno da strrchr - %s\n", strrchr(str, c_strrchr));

	//--------------------------------------------------------------FUNÇÃO FT_STRNCMP
	char str1[] = "ad";
	char str2[] = "pjuh";
	int n = 4;
	printf("\n----------------------------------------------------------ft_strncmp\n");
	printf("str1: %s - str2: %s\n", str1, str2);
	printf("O retorno de ft_strncmp - %d\n", ft_strncmp(str1, str2, n));
	printf("O retorno de strncmp - %d\n", strncmp(str1, str2, n));

	//--------------------------------------------------------------FUNÇÃO FT_STRLCPY

	int sizes[5] = {10,8,0,2,5};
	int t = 15;
    char string[] = "minha string";
    char buffer[t];
	char buffer2[t];
    int r;
	int e;
	printf("\n----------------------------------------------------------ft_strlcpy\n");	
	for(int i = 0; i < 5; i++)
	{
		r = ft_strlcpy(buffer, string, sizes[i]);
		printf("\nSource: ('%s') - Destino: ('%s'), size: %d - retounou de ft_strlcpy: %d",
			string,
			buffer,
			sizes[i],
			r
			);
		e = strlcpy(buffer2, string, sizes[i]);
		printf("\nSource: ('%s') - Destino: ('%s'), size: %d - retounou de strlcpy: %d\n",
			string,
			buffer2,
			sizes[i],
			e
			);
	}	
	printf("\n");

	//--------------------------------------------------------------FUNÇÃO FT_STRLCAT
	printf("\n----------------------------------------------------------ft_strlcat\n");	
	char first[] = "Este é ";
    char last[] = "um teste da função ft_strlcat";
    int size = 18;

    printf("ft_strlcat Retorna: %zu\n",ft_strlcat(last, first, size));
    printf("strlcat retorna: %zu\n",strlcat(last, first, size));

	//--------------------------------------------------------------FUNÇÃO FT_MEMSET
	printf("\n----------------------------------------------------------ft_memset\n");
	int num_ft_memset[] = {1,2,3,4,5,6};
	int num_memset[] = {1,2,3,4,5,6};
	char str_ft_memset[] = "Teste da função ft_memset";
	char str_memset[] = "Teste da função ft_memset";	
	int pos = 5;
	int rep = 6;
	char *p0;
	char *p1;
	
	printf("Antes de aplicação de ft_memset: %s\n\n", str_ft_memset);
	printf("Inserindo o caractere * depois da 5 posição por 6 vezes.\n");
	p0 = ft_memset(num_ft_memset + pos, 9, rep);
	printf("Resultado com ft_memset(): %d\n", *(int*)p0);
	p1 = memset(num_memset + pos, 9, rep);
	printf("Resultado com memset(): %d\n", *(int*)p1);

	ft_memset(str_ft_memset + pos, '*', rep);
	printf("Resultado com ft_memset(): %s\n", str_ft_memset);
	memset(str_memset + pos, '*', rep);
	printf("Resultado com memset(): %s\n", str_memset);


	//--------------------------------------------------------------FUNÇÃO FT_MEMCMP
	printf("\n----------------------------------------------------------ft_memcmp\n");
	char s1_memcmp[] = "adftu.hjy";
	char s2_memcmp[] = "adftu*";
	//int comp = 0;
	printf("Para s1: %s  e  s2: %s\n", s1_memcmp, s2_memcmp);

	for (int i = 0; i < 10; i++)
	{
		printf("\nQtde de bytes a comparar: %d\n", i);
		printf("O Retorno de ft_memcmp é: %d\n", ft_memcmp(s1_memcmp, s2_memcmp, i));
		printf("O Retorno de memcmp é: %d\n", memcmp(s1_memcmp, s2_memcmp, i));
	}

	//--------------------------------------------------------------FUNÇÃO FT_MEMCPY
	printf("\n----------------------------------------------------------ft_memcpy\n");
	char src_memcpy[] = "abcdefghijklmnopqrstuvxz";
	char dest_memcpy[27];
	printf("a string original é: %s\n", src_memcpy);	
	ft_memcpy(dest_memcpy, src_memcpy,sizeof(char)*27);
	printf("resultado de ft_memcpy é: %s\n", dest_memcpy);
	char e_memcpy[10];
	ft_memcpy(e_memcpy, src_memcpy + 8,sizeof(char)*9);
	printf("resultado de ft_memcpy partindo do oitavo elmento com size 9: %s\n", e_memcpy);
	char g_memcpy[10];
	memcpy(g_memcpy, src_memcpy + 8,sizeof(char)*9);
	printf("resultado de memcpy partindo do oitavo elmento com size 9: %s\n", g_memcpy);


	//--------------------------------------------------------------FUNÇÃO FT_MEMCPY
	printf("\n----------------------------------------------------------ft_memchr\n");
	char str_memcpy[] = "http://www.42saopaulo.com";
	char ch = '.';
	char *ret;
	ret = ft_memchr(str_memcpy, ch, ft_strlen(str_memcpy));
	printf("A string é : - |%s|\n", str_memcpy);
	printf("Após |%c| : - |%s|\n", ch, ret);

	//--------------------------------------------------------------FUNÇÃO FT_MEMMOVE
	printf("\n----------------------------------------------------------ft_memmove\n");
    char dest[] = "olds*****";
    const char src[]  = "newstring";
    int tam = 6;

    printf("Antes dest = %s, src = %s, size = %d\n", dest, src, tam);
    ft_memmove(dest, src, tam);
    printf("Depois de ft_memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, tam);
    printf("Depois de memmove dest = %s, src = %s\n", dest, src);

	//--------------------------------------------------------------FUNÇÃO FT_STRNSTR
	printf("\n----------------------------------------------------------ft_strnstr\n");
	const char *largestring = "O teste de uma string longa";
	const char *smallstring = "ng l";
	int t_strnstr = 23;

	printf("String original: %s\n", largestring);
	printf("Sub-string procurada: %s\n", smallstring);
	printf("size: %d\n", t_strnstr);
	printf("Resultado de ft_strnstr: %s\n",strnstr(largestring, smallstring, t_strnstr));
	printf("Resultado de strnstr: %s\n",strnstr(largestring, smallstring, t_strnstr));

	//--------------------------------------------------------------FUNÇÃO FT_STRNSTR
	printf("\n----------------------------------------------------------ft_calloc\n");
	int *p_calloc;
	size_t a_calloc;

	a_calloc = 5;
	p_calloc = (int *)ft_calloc(a_calloc, sizeof(int));
	if (!p_calloc)
	{
		printf ("** Erro: Memoria Insuficiente **");
	}
	printf("Alocou: %ld\n", a_calloc);
	for(size_t i_calloc=0; i_calloc < a_calloc; i_calloc++)
		printf("%d", *(char*)(p_calloc + i_calloc));
	printf("\n");

	free(p_calloc);

	//--------------------------------------------------------------FUNÇÃO FT_SUBSTR
	printf("\n----------------------------------------------------------ft_substr\n");
	char *p_substr = " um teste para uma strong longa";
	//char *p = "";
	char *p_res_substr;
	unsigned int start_substr = 7;
	size_t len_substr = 3;

	p_res_substr = ft_substr(p_substr, start_substr, len_substr);
	if(p_res_substr)
		printf("%s\n", p_res_substr);

	free(p_res_substr);


	printf("\n########## ****************************************** ##########\n\n");

	return 0;
}