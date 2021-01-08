import os
import shutil
import re

cur_path = os.path.dirname(os.path.realpath(__file__))
store = ' '.join(os.listdir(cur_path))
files = re.findall("[0-9]+[.\w]*", store)
files.sort()
for file in files:
    folder = re.findall('^[0-9]+', file)
    dest_path = os.path.join(cur_path, folder[0])
    if not os.path.exists(dest_path):
        os.mkdir(folder[0])
    shutil.copy(file, dest_path)
    
