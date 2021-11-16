set term x11
set title "factorials"
set xlabel "N"
set ylabel "log(N!)"

plot ("factorial.dat") u 1:3 w l
