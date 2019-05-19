#!/usr/bin/env python

#
#  This script renames the files from the IBM i format (H.headername) to the more common headername.h
#
#

import os
import os.path as path 

files = os.listdir(".")

for filename in files:
    if filename[:2] == "H.":
        newname = "%s.H" %  (filename.split(".")[1])
        print filename,
        print " --> ",
        print newname

        os.rename(filename, newname)
        
