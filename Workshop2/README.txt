HackTHIS: Arduino Workshop #2
==============================

We will be playing with the 595 shift register. Or more properly the 74HC595.
It is the first integrated circuit (IC) we will play with in our workshops.
Important information about ICs are often found in documents prepared by the
manfacturer called datasheets. The datasheet for the 74HC595 is included here
and found online at http://www.sparkfun.com/datasheets/IC/SN74HC595.pdf.

A more human readable reference is found at http://bildr.org/2011/02/74hc595/
with instructions for chaining this handy chips together.

We will also play with a 7-segment display. Here are the pinouts:

Comon Anodes: 3 & 8
a: 7
b: 6
c: 4
d: 2
e: 1
f: 9
g: 10
dp: 5

    a
   ___
 f|   |b
  |___|
 e| g |c
  |___| .dp
    d
