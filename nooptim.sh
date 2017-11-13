#/bin/bash
# nooptim.sh - build a program with no compiler optimisations.

gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c testsort.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c files.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c str.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c srt.c

gcc testsort.o files.o str.o srt.o -o testsort

gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c qss.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c files.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c str.c
gcc -Wall -Wextra -g -O0 -D_GNU_SOURCE=1 -c srt.c

gcc qss.o files.o str.o srt.o -o qss

rm *.o
