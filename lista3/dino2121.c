#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    char Dino[21][21]= {
    "                     ",
    "        ########### ",
    "       ## ##########",
    "       #############",
    "       #############",
    "       #####        ",
    "       ##########   ",
    "#      ######       ",
    "#     ########      ",
    "##   ############   ",
    "### ########### #   ",
    "###############     ",
    "###############     ",
    " #############      ",
    "  ###########       ",
    "   #########        ",
    "    ###  ##         ",
    "    ##   #          ",
    "    #    #          ",
    "    ##   ##         "};
    for(d=0;d<21;d++)
    {
        printf("%s\n", Dino[d]);
    }
    return 0;
}
