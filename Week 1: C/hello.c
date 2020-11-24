//hello, (name)

// including libraries

#include <stdio.h>
#include <cs50.h>

//main function
int main(void)
{
    // get users name
    string name = get_string("What's your name?\n");

    //print users name
    printf("hello, %s\n", name);
}