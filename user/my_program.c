#include "types.h" // for uint
#include "user.h"

int main() {
    printf(1, "Hello, World!\n"); //1 because stdout is file descriptor 1
    int favnum = getfavnum();
    printf(1, "My favorite number is: %d\n", favnum);
    
    exit();
}
