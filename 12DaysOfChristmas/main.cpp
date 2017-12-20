#include <iostream>

int main()
{
    char *n[] { "First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelveth" };
    char *s[] { "On the ", " day of Christmas my true love sent to me\n" };
    char *g[] { "a Partridge in a Pear Tree.\n" , "Two Turtle Doves\n", "Three French Hens,\n", "Four Calling Birds,\n", "Five Gold Rings,\n", "Geese a-Laying,\n", "Seven Swans a-Swimming,\n", "Eight Maids a-Milking,\n", "Ladies Dancing,\n", "Lords a-Leaping,\n", "Pipers Piping,\n", "Drummers Drumming,\n" };

    for (int i = 0; i < 12; ++i)
    {
        std::cout << s[0] << n[i] << s[1];

        for (int j = i; j >= 0; --j)
        {
            if (j == 0 && i > 0)
                std::cout << "and ";

            std::cout << g[j];
        }

        std::cout << std::endl;
    }
}
