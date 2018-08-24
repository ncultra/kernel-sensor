#! /usr/bin/python
import sys
import subprocess
import signal
import os
from datetime import datetime as dt


process_name = sys.argv[1]

proc = subprocess.Popen(['pgrep', process_name], stdout=subprocess.PIPE)
for pid in proc.stdout:
    os.kill(int(pid), signal.SIGTERM)
