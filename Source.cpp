#include <iostream>

void f(long l);
void f(short s);
void f(char *s);

int main()
{
	return 0;
	f(1L);			// will call f(long l)
	f(2);			// will not compile duo to multiple matches: f(long l), f(short s)
	f(3.0);			// will not comiple duo to multiple matches: f(long l), f(short s)
	f(nullptr);		// will call f(char *s)
	f("a");			// will call f(char *s)
	f('a');			// will not comiple duo to multiple matches: f(long l), f(short s)
}