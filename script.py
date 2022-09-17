import os
archivos = [ "bzero", "memcpy", "memccpy", "memmove", "memchr", "memcmp", "strlen", "isalpha", "isdigit", "isalnum", "isascii", "isprint", "toupper", "tolower", "strchr", "strrchr", "strncmp", "strlcpy", "strlcat", "strnstr", "atoi"]

for fd in archivos:
	open("ft_"+ fd + ".c", "w+")