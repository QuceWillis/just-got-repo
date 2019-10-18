// Quentin Thorpe
// Simple C code to create a shell that accepts a single command

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <readline/readline.h>
#include <sys/types.h>
#include <sys/wait.h>



int main()
{
        char *minor2;

while (minor2 = readline("\\(^_^)/ > ")) //Asks user to enter and also stores value into minor2 variable
{


        if (strcmp(minor2, "quit") == 0) //Compares the string in minor 2 to "quit" in order to exit loop
                exit(1);        // exits loop


                pid_t pid;
                pid = fork();   //Calling fork

                if (pid == 0)
                {
                //Child process
                        execvp (minor2, &minor2);       //Display values of command entered
                        printf("%s: command not found\n", minor2);      //Will reach if command could not be found
                        exit(1);
                }
                else if (pid > 0)
                {
                //Parent process
                        wait( (int *)0);        //Waits for child to finish
                }
                else
                {
                        perror("fork error");   //Error in fork process
                        exit(1);
                }

                free(minor2);   //Frees minor2 memory

        }

        return 0;
}

