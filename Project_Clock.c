#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    time_t rawtime = 0;
    struct tm *ptime;
    bool is_running = true;

    printf("Digital Clock (Windows)\n");

    while (is_running)
    {
        time(&rawtime);
        ptime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d",
               ptime->tm_hour,
               ptime->tm_min,
               ptime->tm_sec);

        fflush(stdout);
        Sleep(1000);
    }

    return 0;
}
