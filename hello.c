#include "hello.h"

int main() {
	printf("hello world\n");
}

char *myStrcpy(char *dest, const char *src) {
    return NULL;
}

size_t myStrlen(const char *string) {
    return 0;
}

char *myStrcat(char *dest, const char *src) {
	char *tmp = dest;
	while(*tmp) tmp++;
	while(*src) *tmp++ = *src++;
	printf("%s", dest);
	return dest;
}

int myStrcmp(const char *string1, const char *string2) {
    return 0;
}
