set term x11
set grid
set xtics 0.1
f(x) = (x*x+1)/3



plot f(x) with lines, x with lines
