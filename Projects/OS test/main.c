#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smp0_tests.h"

#define LENGTH(s) (sizeof(s) / sizeof(*s))

/* Structures */
typedef struct {
	char *word;
	int counter;
} WordCountEntry;


int process_stream(WordCountEntry entries[], int entry_count)
{
	short line_count = 0;
	char buffer[30];

	while (gets(buffer)) {
		if (*buffer == '.')
			break;
		/* Compare against each entry */
		int i = 0;
		while (i < entry_count) {
			if (!strcmp(entries[i].word, buffer))
				entries[i].counter++;
			i++;
		}
		line_count++;
	}
	return line_count;
}


void print_result(WordCountEntry entries[], int entry_count)
{
	printf("Result:\n");
	while (entry_count-- > 0) {
		printf("%s:%d\n", entries->word, entries->counter);
	}
}


void printHelp(const char *name)
{
	printf("usage: %s [-h] <word1> ... <wordN>\n", name);
}


int main(int argc, char **argv)
{
	const char *prog_name = *argv;

	WordCountEntry entries[5];
	int entryCount = 0;

	/* Entry point for the testrunner program */
	if (argc > 1 && !strcmp(argv[1], "-test")) {
		run_smp0_tests(argc - 1, argv + 1);
		return EXIT_SUCCESS;
	}

	while (*argv != NULL) {
		if (**argv == '-') {

			switch ((*argv)[1]) {
			case 'h':
				printHelp(prog_name);
			default:
				printf("%s: Invalid option %s. Use -h for help.\n",
					prog_name, *argv);
			}
		}
		else {
			if (entryCount < LENGTH(entries)) {
				entries[entryCount].word = *argv;
				entries[entryCount++].counter = 0;
			}
		}
		argv++;
	}
	if (entryCount == 0) {
		printf("%s: Please supply at least one word. Use -h for help.\n",
			prog_name);
		return EXIT_FAILURE;
	}
	if (entryCount == 1) {
		printf("Looking for a single word\n");
	}
	else {
		printf("Looking for %d words\n", entryCount);
	}

	process_stream(entries, entryCount);
	print_result(entries, entryCount);

	return EXIT_SUCCESS;
}
