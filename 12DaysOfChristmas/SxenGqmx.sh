#!/bin/bash
FILE_NAME=./main.cpp

cp -f $FILE_NAME ./main_golfed.cpp

sed -i 's/while (/while(/g' ./main_golfed.cpp
sed -i 's/switch (/switch(/g' ./main_golfed.cpp
sed -i 's/for (/for(/g' ./main_golfed.cpp
sed -i 's/return (/return(/g' ./main_golfed.cpp

sed -i 's/ < /</g' ./main_golfed.cpp
sed -i 's/ <= /<=/g' ./main_golfed.cpp
sed -i 's/ > />/g' ./main_golfed.cpp
sed -i 's/ >= />=/g' ./main_golfed.cpp
sed -i 's/ == /==/g' ./main_golfed.cpp
sed -i 's/ != /!=/g' ./main_golfed.cpp
sed -i 's/ ? /?/g' ./main_golfed.cpp
sed -i 's/ | /|/g' ./main_golfed.cpp
sed -i 's/ : /:/g' ./main_golfed.cpp
sed -i 's/ \& /\&/g' ./main_golfed.cpp
sed -i 's/ = /=/g' ./main_golfed.cpp
sed -i 's/ - /-/g' ./main_golfed.cpp
sed -i 's/ -= /-=/g' ./main_golfed.cpp
sed -i 's/ + /+/g' ./main_golfed.cpp
sed -i 's/ += /+=/g' ./main_golfed.cpp
sed -i 's/ %= /%=/g' ./main_golfed.cpp
sed -i 's/ \/= /\/=/g' ./main_golfed.cpp
sed -i 's/ \/ /\//g' ./main_golfed.cpp
sed -i 's/ \* /\*/g' ./main_golfed.cpp
sed -i 's/ % /%/g' ./main_golfed.cpp

sed -i 's/, /,/g' ./main_golfed.cpp
sed -i 's/if (/if(/g' ./main_golfed.cpp
sed -i 's/) /)/g' ./main_golfed.cpp
sed -i 's/ >> />>/g' ./main_golfed.cpp
sed -i 's/ << /<</g' ./main_golfed.cpp

sed -i 's/; /;/g' ./main_golfed.cpp
sed -i 's/ \&/\&/g' ./main_golfed.cpp

sed -i 's/(){ /(){/g' ./main_golfed.cpp

# remove leading white spaces
sed -i 's/^[ \t]*//' ./main_golfed.cpp
# remove line endings
sed -i ':a;N;$!ba;s/\n//g' ./main_golfed.cpp

cat ./main_golfed.cpp
echo "  "
wc -m ./main_golfed.cpp