# gr-mxvii
GNU Radio blocks for the Data Link layer of the M17 Protocol.

Currently, a work in progress.

This code is based on the
[dkozel gr-m17 github repo](https://github.com/dkozel/gr-m17) by Derek Kozel.
The intent of this code is to extend that work by supporting GNU Radio 3.10 and 
providing working encode and decode blocks.

This code relies on and is tested against the M17 modulator/demodulator code in the 
[n1ai m17-cxx-demod repo](https://github.com/n1ai/m17-cxx-demod) which 
is a fork of the 
[mobilinkd m17-cxx-demod repo](https://github.com/mobilinkd/m17-cxx-demod).
The fork has cherry-picked code from pending pull requests, in particular
the code from 
[Pull Request 21](https://github.com/mobilinkd/m17-cxx-demod/pull/21)
by [robojay](https://github.com/robojay)
that provides support for the bin, sym and rrc file formats that is needed
for the code in this repo to work as intended.


