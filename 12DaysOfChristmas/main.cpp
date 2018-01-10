#include<iostream>
#define c std::cout<<

int main()
{
    char*n[]{"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth","Eleventh","Twelveth","a Partridge in a Pear Tree.","Two Turtle Doves","Three French Hens,","Four Calling Birds,","Five Gold Rings,","Six Geese a-Lay","Seven Swans a-Swimm","Eight Maids a-Milk","Nine Ladies Danc","Ten Lords a-Leap","Eleven Pipers Pip","Twelve Drummers Drumm"};
    int i=0,j;

    for (;i<12;++i)
    {
        c"On the "<<n[i]<<" day of Christmas my true love sent to me\n";

        for (j=i+12;j>11;--j)
        {
            if(j<13&&i)c"and ";

            c n[j];

            if(j>16)c"ing,";

            c"\n";
        }
    }
}