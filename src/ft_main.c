#include "../include/libft.h"
#include <unistd.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

bool Equal(char *lhs, char *rhs)
{
	while (*lhs || *rhs)
	{
		if (*lhs != *rhs)
			return (false);
		++lhs;
		++rhs;
	}
	return (true);
}

void testStrLen(void)
{
	assert(ft_strlen("hello") == 5);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("qwe qwe qwe") == 11);
	
}

void testToupper(void)
{
	assert(ft_toupper((int)'A') == (int)'A');
	assert(ft_toupper((int)'1') == (int)'1');
	assert(ft_toupper((int)'c') == (int)'C');
	assert(ft_toupper((int)'a') == (int)'A');
	assert(ft_toupper((int)'z') == (int)'Z');
	
}

void testToLower(void)
{
	assert(ft_tolower((int)'A') == (int)'a');
	assert(ft_tolower((int)'1') == (int)'1');
	assert(ft_tolower((int)'c') == (int)'c');
	assert(ft_tolower((int)'a') == (int)'a');
	assert(ft_tolower((int)'Z') == (int)'z');
	
}

void testIsAlpha()
{
	assert(ft_isalpha((int)'a'));
	assert(ft_isalpha((int)'A'));
	assert(ft_isalpha((int)'Z'));
	assert(ft_isalpha((int)'f'));
	assert(!ft_isalpha((int)'1'));
	assert(!ft_isalpha((int)'-'));
	int s = 'a' + 256;
	assert(!ft_isalpha(s));
}

void testIsDigit()
{
	assert(ft_isdigit((int)'1'));
	assert(ft_isdigit((int)'9'));
	assert(!ft_isdigit((int)'a'));
	assert(!ft_isdigit(3));
}

void testAlNum()
{
	assert(ft_isalnum((int)'1'));
	assert(ft_isalnum((int)'a'));
	assert(!ft_isalnum((int)'-'));
	
}

void testIsAscii()
{
	assert(ft_isascii(1));
	assert(ft_isascii(100));
	assert(!ft_isascii(999));
	assert(!ft_isascii(128));
	assert(!ft_isascii(-12));
}

void testIsPrint()
{
	assert(ft_isprint((int)'1'));
	assert(ft_isprint((int)'a'));
	assert(!ft_isprint((int)'\n'));
	assert(!ft_isprint((int)'\t'));
	assert(!ft_isprint(1));
	assert(!ft_isprint(127));
	
}

void testStrdup()
{
	assert(Equal(ft_strdup(""), ""));
	assert(Equal(ft_strdup("a"), "a"));
	assert(!Equal(ft_strdup("hello"), "he"));
	assert(!Equal(ft_strdup("qwe"), "hello"));
	assert(Equal(ft_strdup("hello"), "hello"));
	assert(ft_strdup(NULL) == NULL);
	
}

void testStrCpy()
{
	{
		char *s = (char*)malloc(3);
		char *res = ft_strcpy(s, "hi!");
		assert(Equal(ft_strcpy(s, "hi!"), "hi!"));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(3);
		char *res = ft_strcpy(s, "");
		assert(Equal(ft_strcpy(s, ""), ""));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(3);
		char *res = ft_strcpy(s, "hi!");
		assert(Equal(ft_strcpy(s, "hi!"), "hi!"));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(5);
		char *res = ft_strcpy(s, "asdfg");
		assert(Equal(ft_strcpy(s, "asdfg"), "asdfg"));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(1);
		char *res = ft_strcpy(s, "asdfg");
		assert(Equal(ft_strcpy(s, "asdfg"), "asdfg"));
		assert(Equal(s, res));
		free(s);
	}
}

void testMemSet()
{
	{
		char *s = (char*)malloc(3);
		char *res = (char*)ft_memset(s, 65, 3);
		assert(Equal((char*)ft_memset(s, 65, 3), "AAA"));
		assert(Equal(s, res));
		free(s);
	}
	// {
	// 	char *s = (char*)malloc(1);
	// 	char *res = (char*)ft_memset(s, 65, 0);
	// 	assert(Equal((char*)ft_memset(s, 65, 0), ""));
	// 	assert(Equal(s, res));
	// 	free(s);
	// }
}

void testBZero()
{
	{
		char *s = (char*)malloc(3);
		s[0] = 'a';
		s[1] = 'a';
		s[2] = 'd';		
		ft_bzero(s, 2);
		assert(s[0] == '\0');
		assert(s[1] == '\0');
		assert(s[2] == 'd');
		free(s);
	}
	{
		char *s = (char*)malloc(3);
		s[0] = 'a';
		s[1] = 'a';
		s[2] = 'd';		
		ft_bzero(s, 0);
		assert(s[0] == 'a');
		assert(s[1] == 'a');
		assert(s[2] == 'd');
		free(s);
	}
}

void testMemCpy()
{
	{
		char *s = (char*)malloc(3);
		char *res = ft_memcpy(s, "hi!", 3);
		assert(Equal(ft_memcpy(s, "hi!", 3), "hi!"));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(3);
		char *res = ft_memcpy(s, "hi!", 3);
		assert(Equal(ft_memcpy(s, "hi!", 3), "hi!"));
		assert(Equal(s, res));
		free(s);
	}
	{
		char *s = (char*)malloc(3);
		char *res = ft_memcpy(s, "", 1);
		assert(Equal(ft_memcpy(s, "", 3), ""));
		assert(Equal(s, res));
		free(s);
	}
	// {
	// 	char *s = (char*)malloc(3);
	// 	char *res = ft_memcpy(NULL, NULL, 1);
	// 	assert(res == NULL);
	// 	//assert(Equal(s, res));
	// 	free(s);
	// }
}

void testStrNCmp()
{
	assert(ft_strncmp("asd", "asd", 3) == 0);
	assert(ft_strncmp("", "", 1) == 0);
	assert(ft_strncmp("aa", "abd", 2) == strncmp("aa", "abd", 2));
	//assert(ft_strncmp("asz", "asd", 3) == strncmp("asz", "asd", 3));
	//assert(ft_strncmp("", "asd", 3) == strncmp("", "asd", 3));
	//assert(ft_strncmp("", "", 1) == strncmp("", "", 1));

}

void testStrChr()
{
	assert(ft_strchr("aAd", 65) == strchr("aAd", 65));
	assert(ft_strchr("", 65) == strchr("", 65));
	assert(ft_strchr("aAAA", 65) == strchr("aAAA", 65));
	assert(ft_strchr("a", 65) == strchr("a", 65));

}
void testStrRChr()
{
	assert(ft_strrchr("aAd", 65) == strrchr("aAd", 65));
	assert(ft_strrchr("", 65) == strrchr("", 65));
	assert(ft_strrchr("aAAA", 65) == strrchr("aAAA", 65));
	assert(ft_strrchr("a", 65) == strrchr("a", 65));

}
// void testStrNCpy()
// {
// 	char* de;
// 	char* sr = "asd";

// 	write(strncpy(de, sr, 3));
// }
void	testMemCmp()
{
	// assert(ft_memcmp("asd", "asc", 2) == memcmp("asd", "asc", 2));
	// assert(ft_memcmp("asd", "asc", 0) == memcmp("asd", "asc", 0));
	// assert(ft_memcmp("asd", "asc", 3) == memcmp("asd", "asc", 3));
	// assert(ft_memcmp("", "asc", 2) == memcmp("", "asc", 2));
}

void	testStrNStr()
{
	assert(Equal(ft_strnstr("Can lol", "Can", 3),"Can lol"));
	assert(Equal(ft_strnstr("Can lol", "", 4),"Can lol"));
	assert(ft_strnstr("Can lol", "Can", 0) == NULL);
	assert(ft_strnstr("Can lol", "Cans", 3) == NULL);
}

void testStrLCpy()
{
	char* str = (char*)malloc(sizeof(char) * 6);
	ft_strlcpy(str, "Hello world!", 6);
	assert(Equal(str, "Hello"));
}

void testAtoi()
{
	{
	 	const char* data = "1231231";	
	 	assert(atoi(data) == ft_atoi(data));
	}
	{
		const char* data = "+123";
		assert(atoi(data) == ft_atoi(data));
	}
	{
		const char* data = "-123";
		assert(atoi(data) == ft_atoi(data));
	}
	{
		const char* data = "123jq514";
		assert(atoi(data) == ft_atoi(data));
	}
	{
		const char* data = "q12313weq";
		assert(atoi(data) == ft_atoi(data));
	}
}

void	testCalloc()
{
	ft_calloc(10, 4);
}

void testMemCCpy()
{
	// char* s = (char*)malloc(5);
	// for (int i = 0; i < 5; ++i)
	// 	s[i] = 'A';
	// ft_memccpy(s, "abcd321", 'c', 5);
	// assert(Equal(s, "abcAA"));
}

void testMemChr()
{
	// assert(ft_memchr("aAd", 65, 3) == memchr("aAd", 65, 3));
	// assert(ft_memchr("", 65, 3) == memchr("", 65, 3));
	// assert(ft_memchr("aAAA", 65, 4) == memchr("aAAA", 65, 4));
	//	assert(ft_memchr("a", 65, 2) == memchr("a", 65, 2));
}

void testMemMove()
{

	char *ch = (char*) malloc(5 * sizeof(char));
	for (int i = 0; i < 4; ++i)
	{
		ch[i] = i + '0';
	}
	ch[4] = '\0';
	char *src = ch;
	char *dest = ch + 2;
	assert(Equal((char*)ft_memmove(dest, src, 2), "01"));
	
}

void testPutsFunc()
{
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	
	ft_putstr_fd("ft_putstr_fd - Ok\n", 1);
	ft_putendl_fd("ft_putendl_fd - Ok", 1);

	ft_putnbr_fd(123, 1);
	ft_putchar_fd('\n', 1);
	
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	
	ft_putnbr_fd(-12, 1);
	ft_putchar_fd('\n', 1);
}

void	testItoa()
{

	write(1, ft_itoa(123), 3);
	write(1, "\n", 1);
	write(1, ft_itoa(0), 1);
	write(1, "\n", 1);
	write(1, ft_itoa(12345), 5);
	write(1, "\n", 1);
	write(1, ft_itoa(2147483647), 10);
	write(1, "\n", 1);
	write(1, ft_itoa(-1), 2);
	write(1, "\n", 1);
	write(1, ft_itoa(-123), 4);
	write(1, "\n", 1);
	write(1, ft_itoa(-0), 1);
	write(1, "\n", 1);
	write(1, ft_itoa(-12345), 6);
	write(1, "\n", 1);
	write(1, ft_itoa(-2147483648), 11);
	write(1, "\n", 1);
		
}

void	testSubStr()
{
	assert(Equal(ft_substr("test string", 0 , 4), "test"));
	assert(Equal(ft_substr("", 0 , 0), ""));
	assert(Equal(ft_substr("123456", 0 , 3), "123"));
	assert(Equal(ft_substr("", 0 , 5), ""));
	assert(Equal(ft_substr("123 asd", 1, 2), "23"));
	assert(Equal(ft_substr("123 asd", 1, 8), "23 asd"));
	assert(Equal(ft_substr("123 asd", 5, 5), "sd"));
}

void	testStrJoin()
{
	assert(Equal(ft_strjoin("123", "456"), "123456"));
	assert(Equal(ft_strjoin("", "456"), "456"));
	assert(Equal(ft_strjoin("", ""), ""));
	assert(Equal(ft_strjoin("Hello ", "world!"), "Hello world!"));
}

void	testStrTrim()
{
	assert(Equal(ft_strtrim("   asd    ", " "), "asd"));
	assert(Equal(ft_strtrim("12312312asd1231312312", "123"), "asd"));
}

void	testSplit()
{
	// {
	// 	char **words;
	// 	int i = 0;
	// 	words = ft_split("HelloWorld!", ' ');
	// 	while (words[i] != NULL)
	// 	{
	// 		ft_putendl_fd(words[i], 1);
	// 		++i;
	// 	}
	// }
	// {
	// 	char **words;
	// 	int i = 0;
	// 	words = ft_split("Hello world!", ' ');
	// 	assert(Equal(words[0], "Hello"));
	// 	assert(Equal(words[1], "world!"));
	// 	while (words[i] != NULL)
	// 	{
	// 		ft_putendl_fd(words[i], 1);
	// 		++i;
	// 	}
	// }
	// {
	// 	char **words;
	// 	int i = 0;
	// 	words = ft_split(" ", ' ');
	// 	while (words[i] != NULL)
	// 	{
	// 		ft_putendl_fd(words[i], 1);
	// 		++i;
	// 	}
	// }
	{
		char **words;
		int i = 0;
		words = ft_split("Hello world!    ", ' ');
		while (words[i] != NULL)
		{
			ft_putendl_fd(words[i], 1);
			++i;
		}
	}
	// {
	// 	char **words;
	// 	int i = 0;
	// 	words = ft_split("    Hello    world!", ' ');
	// 	while (words[i] != NULL)
	// 	{
	// 		ft_putendl_fd(words[i], 1);
	// 		++i;
	// 	}
	// }

}
//	BONUS PART

void	testListNew()
{
 	{
 		int		*ch = (int*)malloc(sizeof(int));
 		t_list	*list;

 	 	*ch = 123;
 	 	list = ft_lstnew((void*)ch);
 		assert(*(int*)list->content == 123);
 		assert(list->next == NULL);
 	}
 	{
	 	t_list *list;
	 	list = ft_lstnew(NULL);
		assert(list->content == NULL);
 	}
}

void testLstAddFront()
{
	{
		t_list *list = NULL;
		t_list *head = NULL;

		ft_lstadd_front(&list, head);
		assert(list == NULL);
		assert(head == NULL);
	}
	{
		t_list *list = ft_lstnew(NULL);
		t_list *head = NULL;

		ft_lstadd_front(&list, head);
		assert(list->content == NULL);
		assert(head == NULL);
	}
	{
		t_list *list = NULL;
		t_list *head = ft_lstnew(NULL);

		ft_lstadd_front(&list, head);
		assert(list == NULL);
		assert(head->content == NULL);
	}
	{
		t_list *list;
		t_list *head;
		int a = 0;
		int b = 1;
		int		*zero = &a;
		int		*one = &b;
		
		list = ft_lstnew((void*)one);
		head = ft_lstnew((void*)zero);
		ft_lstadd_front(&list, head);
		assert(head->content == (void*)zero);
		head = head->next;
		assert(head->content == (void*)one);
		assert(head->next == NULL);
	}
}

void testLstSize()
{
	{
		assert(ft_lstsize(NULL) == 0);
	}
	{
		int		*ch = (int*)malloc(sizeof(int));
 		t_list	*list;

 	 	*ch = 123;
 	 	list = ft_lstnew((void*)ch);
 	 	assert(ft_lstsize(list) == 1);
 	 	assert(ft_lstsize(list) == 1);
	}
	{
		t_list *list;
		t_list *head;
		int a = 0;
		int b = 1;
		int		*zero = &a;
		int		*one = &b;
		
		list = ft_lstnew((void*)one);
		head = ft_lstnew((void*)zero);
		ft_lstadd_front(&list, head);
		assert(ft_lstsize(head) == 2);
		head = head->next;
		assert(ft_lstsize(head) == 1);
		assert(ft_lstsize(list) == 2);
		assert(ft_lstsize(list) == 2);
	}
}

void testLstLast()
{
	{
		t_list *list = NULL;
		t_list *last = ft_lstlast(list);
		assert(last == NULL);
	}
	{
		t_list *list;
		t_list *last;
		int		b = 1;
		int		*one = &b;
		
		list = ft_lstnew((void*)one);
		last = ft_lstlast(list);
		assert(last->content == (void*)one);
		assert(last->next == NULL);
	}
	{
		t_list *list;
		t_list *head;
		int a = 0;
		int b = 1;
		int		*zero = &a;
		int		*one = &b;
		
		list = ft_lstnew((void*)one);
		head = ft_lstnew((void*)zero);
		ft_lstadd_front(&list, head);
		list = ft_lstlast(head);
		assert(list->content == (void*)one);
		assert(list->next == NULL);
	}
}

void testLstAddBack()
{
	{
		t_list *list = NULL;
		t_list *new = NULL;

		ft_lstadd_back(&list, new);
		assert(list == NULL);
		assert(new == NULL);
	}
	{
		t_list *list = ft_lstnew(NULL);
		t_list *new = NULL;

		ft_lstadd_back(&list, new);
		assert(list->content == NULL);
		assert(new == NULL);
	}
	{
		t_list *list = NULL;
		t_list *new = ft_lstnew(NULL);

		ft_lstadd_back(&list, new);
		assert(list->content == new->content);
		assert(new->content == NULL);
	}
	{	
		int a = 123, b = 24, c = 3132;
		int		*ch = &a;
		int		*ch1 = &b;
		int		*ch2 = &c;
		t_list	*list;
		t_list	*new1;
		t_list	*new2;
	 	
	 	list = ft_lstnew((void*)ch);
	 	new1 = ft_lstnew((void*)ch1);
	 	new2 = ft_lstnew((void*)ch2);

	 	ft_lstadd_back(&list, new1);
	 	assert(ft_lstsize(list) == 2);
	 	ft_lstadd_back(&list, new2);
	 	assert(ft_lstsize(list) == 3);
	 	
	 	assert(list->content == (void*)ch);
	 	list = list->next;
	 	assert(list->content == (void*)ch1);
	 	list = list->next;
	 	assert(list->content == (void*)ch2);
	 	assert(list->next == NULL);
 	}
 			
}

void del(void *a)
{
	a = (void*)a;
	a = NULL;
}

void testLstDelone()
{
	// void (*p_del) (void*);
	// p_del = del;
	// {
	// 	int a = 123, b = 24, c = 3132;
	// 	int		*ch = &a;
	// 	int		*ch1 = &b;
	// 	int		*ch2 = &c;
	// 	t_list	*list;
	// 	t_list	*new1;
	// 	t_list	*new2;
	 	
	//  	list = ft_lstnew((void*)ch);
	//  	new1 = ft_lstnew((void*)ch1);
	//  	new2 = ft_lstnew((void*)ch2);

	//  	ft_lstadd_back(&list, new1);
	//  	ft_lstadd_back(&list, new2);

	//  	assert(ft_lstsize(list) == 3);
	//  	ft_lstdelone(list, p_del);
	//  	assert(list->content == NULL);
	//  	assert(ft_lstsize(list) == 0);
	// }
}

void testLstClear()
{
	void (*p_del) (void*);
	p_del = del;
	{
		int a = 123, b = 24, c = 3132;
		int		*ch = &a;
		int		*ch1 = &b;
		int		*ch2 = &c;
		t_list	*list;
		t_list	*new1;
		t_list	*new2;
	 	
	 	list = ft_lstnew((void*)ch);
	 	new1 = ft_lstnew((void*)ch1);
	 	new2 = ft_lstnew((void*)ch2);

	 	ft_lstadd_back(&list, new1);
	 	ft_lstadd_back(&list, new2);

	 	assert(ft_lstsize(list) == 3);
	 	ft_lstclear(&list, p_del);
	 	assert(ft_lstsize(list) == 0);
	 	assert(list == NULL);
	}
	{
		t_list *list = NULL;
		ft_lstclear(&list, p_del);
		assert(list == NULL);
	}
	{
		t_list *list = ft_lstnew(NULL);
		ft_lstclear(&list, p_del);
		assert(list == NULL);
	}

}

void sqr(void *el)
{
	int *temp = (int*)(el);
	*temp *= *temp;
	el = (void*)temp;
}

void testLstIter()
{
	void (*f)(void *);
	f = sqr;
	{
		int a = 2, b = 3, c = 5;
		int		*ch = &a;
		int		*ch1 = &b;
		int		*ch2 = &c;
		t_list	*list;
		t_list	*new1;
		t_list	*new2;
	 	
	 	list = ft_lstnew((void*)ch);
	 	new1 = ft_lstnew((void*)ch1);
	 	new2 = ft_lstnew((void*)ch2);

	 	ft_lstadd_back(&list, new1);
	 	ft_lstadd_back(&list, new2);

	 	ft_lstiter(list, f);
	 	assert(*(int*)list->content == 4);
	 	list = list->next;
	 	assert(*(int*)list->content == 9);
	 	list = list->next;
	 	assert(*(int*)list->content == 25);
	}
}

void testLstMap()
{

}

int		main(void)
{
	write(1, "Tests!\n", 7);
	// testStrLen();
	// testToupper();
	// testToLower();
	// testIsAlpha();
	// testAlNum();
	// testIsAscii();
	// testIsPrint();
	// testStrdup();
	// testStrCpy();
	// testMemSet();
	// testBZero();
	// testMemCpy();
	// testStrNCmp();
	// testStrChr();
	// testStrRChr();
	// testMemCmp();
	// testStrNStr();
	// testStrLCpy();
	// testAtoi();
	// testCalloc();
	// testMemCCpy();
	// testMemChr();
	// testMemMove();
	// testPutsFunc(); //Ok
	// testItoa(); //Ok
	// testSubStr();
	// testStrJoin();
	// testStrTrim();
	// testSplit();

	// BONUSPARTTEST
	
	testListNew();
	testLstAddFront();
	testLstSize();
	testLstLast();
	testLstAddBack();
	testLstDelone();
	testLstClear();
	testLstIter();
	testLstMap();
	write(1, "End tests!\n", 11);
	return (0);
}