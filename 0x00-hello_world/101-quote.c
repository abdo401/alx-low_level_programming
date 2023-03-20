#include <unistd.h>

int main(void)
{
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1; // exclude null terminator
    ssize_t written = write(2, msg, len); // write to stderr (file descriptor 2)
    if (written != len)
        return 1;
    return 1;
}
