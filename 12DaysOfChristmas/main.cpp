#include<iostream>
#define c std::cout <<

int main()
{
    char*n[]{"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth","Eleventh","Twelveth"};
    char*g[]{"a Partridge in a Pear Tree.","Two Turtle Doves","Three French Hens,","Four Calling Birds,","Five Gold Rings,","Six Geese a-Lay","Seven Swans a-Swimm","Eight Maids a-Milk","Nine Ladies Danc","Ten Lords a-Leap","Eleven Pipers Pip","Twelve Drummers Drumm"};

    for (int i=0;i<12;++i)
    {
        c"On the "<<n[i]<<" day of Christmas my true love sent to me\n";

        for (int j=i;j>=0;--j)
        {
            if(j==0&&i>0)c"and ";

            c g[j];

            if(j>4)c"ing,";

            c"\n";
        }

        c"\n";
    }
}