A deliberately unfair benchmark of Python lists (arrays). C is here for comparision.

$ time python3 array.py
50000
python3 array.py  5.18s user 0.00s system 99% cpu 5.196 total

$ time python2 array.py
50000
python2 array.py  2.42s user 0.22s system 99% cpu 2.641 total

$ time ./array
50000
./array  0.05s user 0.00s system 90% cpu 0.055 total

$ time ./arrayO3
50000
./arrayO3  0.03s user 0.00s system 91% cpu 0.033 total
