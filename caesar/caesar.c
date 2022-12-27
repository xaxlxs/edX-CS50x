#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) 
{
    if(argv[1] != 1)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int key = argv[1];


}


// PSEUDO CODE:
// check that command line argument is valid
//     return 1 if not
// use getstring to get message from user
// create new string variable
// rotate each character in the string by the key
// adding each letter to the new string vabriable
// return the new string
// return 0