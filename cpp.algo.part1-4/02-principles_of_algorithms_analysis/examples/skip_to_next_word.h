#ifndef SKIP_TO_NEXT_WORD
#define SKIP_TO_NEXT_WORD

#include <iostream>
#include <cctype>

inline void skip_to_next_word()
{
	while (!isspace(std::cin.get()))
			;
}

#endif
