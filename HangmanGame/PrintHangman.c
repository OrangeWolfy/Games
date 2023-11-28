#include<stdio.h>

int printHangman3Lives(int mistakes)
{
    switch(mistakes) {
        case 0:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 1:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 2:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\\\n");
            printf("   |             / | \\\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 3:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\\\n");
            printf("   |             / | \\\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |              / \\\n");
            printf("   |             /   \\\n");
            printf("___|___\n");
            return -1;
            break;
        default:
            break;
    }
    putchar('\n');
    return mistakes;
}

int printHangman6Lives(int mistakes)
{
    switch(mistakes) {
        case 0:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 1:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 2:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 3:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\n");
            printf("   |             / |\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 4:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\\\n");
            printf("   |             / | \\\n");
            printf("   |               |\n");
            printf("   |\n");
            printf("   |\n");
            printf("   |\n");
            printf("___|___\n");
            break;
        case 5:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\\\n");
            printf("   |             / | \\\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |              /\n");
            printf("   |             /\n");
            printf("___|___\n");
            break;
        case 6:
            printf("   ____________________\n");
            printf("   |               |\n");
            printf("   |              _|_\n");
            printf("   |             /   \\\n");
            printf("   |             \\___/\n");
            printf("   |               |\n");
            printf("   |              /|\\\n");
            printf("   |             / | \\\n");
            printf("   |               |\n");
            printf("   |               |\n");
            printf("   |              / \\\n");
            printf("   |             /   \\\n");
            printf("___|___\n");
            return -1;
            break;
        default:
            break;
    }
    putchar('\n');
    return mistakes;
}
