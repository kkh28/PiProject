#!/bin/bash

echo "Content-type: text/html"
echo ""

echo "<!DOCTYPE html>"
echo "<html>"
echo "<head>"
echo "<title> Song Player </title>"

echo "<style>"
echo "h1 {"
echo "font-size: 50px;"
echo "text-align: center;"
echo "text-decoration: bold;"
echo "color: #DEB887;"
echo "background-color: #F5F5DC;"
echo "margin-left: 120px;"
echo "margin-right: 120px;"
echo "border-style: solid;"
echo "border-width: 5px;"
echo "border-radius: 25px;"
echo "border-color: #e6e6e6;}"

echo "p {"
echo "font-size: 30px;"
echo "text-align: center;"
echo "color: #333399;}"

echo "div {"
echo "margin-left: 120px;"
echo "margin-right: 120px;"
echo "border-style: solid;"
echo "border-width: 5px;"
echo "border-radius: 25px;"
echo "border-color: #e6e6e6;}"

echo ".main {"
echo "font-size: 30px;"
echo "text-align: center;"
echo "color: #005cb3;"
echo "</style>"

echo "</head>"
echo "<body>"

export h="<h1>Happy Birthday</h1>"
export l="<h1>Mary Had A Little Lamb</h1>"
export s="<h1>Twinkle Twinkle Little Star</h1>"
export b="<h1>Hot Cross Buns</h1>"
export j="<h1>Jingle Bells</h1>"

export happy="<p>
Happy birthday to you!<br>
Happy birthday to you!<br>
Happy birthday dear (name)<br>
Happy birthday to you!
</p>"

export lamb="<p>
Mary had a little lamb<br>
Little lamb, little lamb<br>
Mary had a little lamb<br>
Its fleece was white as snow<br>
</p>"


export star="<p>
Twinkle, twinkle, little star<br>
How I wonder what you are<br>
Up above the world so high<br>
Like a diamond in the sky<br>
Twinkle, twinkle little star<br>
How I wonder what you are.
</p>"

export buns="<p>
Hot cross buns,<br>
Hot cross buns,<br>
One a penny,<br>
Two a penny,<br>
Hot cross buns.
</p>"

export jingle="<p>
Jingle bells, jingle bells<br>
Jingle all the way<br>
Oh what fun it is to ride<br>
In a one-horse open sleigh, hey!<br>
Jingle bells, jingle bells<br>
Jingle all the way<br>
Oh what fun it is to ride<br>
In a one-horse open sleigh.
</p>"

[[ $QUERY_STRING =~ song=([a-z]*) ]]
song=${BASH_REMATCH[1]}

if [ $song = z ]
then
echo "<h1> Song Player </h1>"
echo "<p class=\"main\"> To play a song click the end of the url above and change the letter after \"song=\" to a letter between a and e.<br>
Song a = Happy Birthday<br>
Song b = Mary Had A Little Lamb<br>
Song c = Twinkle Twinkle Little Star<br>
Song d = Hot Cross Buns<br>
Song e = Jingle Bells</p>"
fi

if [ $song = a ] 
then
echo "$h"
echo "$happy"

fi

if [ $song = b ]
then
echo "$l"
echo "$lamb"
fi

if [ $song = c ]
then
echo "$s"
echo "$star"
fi

if [ $song = d ]
then
echo "$b"
echo "$buns"
fi

if [ $song = e ]
then
echo "$j"
echo "$jingle"
fi

echo "<div></div>"

echo "</body>"
echo "</html>"

echo $song

echo $song > /dev/ttyACM0
