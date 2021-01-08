import os
import re

cwd = os.getcwd()
files = os.listdir()
files.remove('folder_1.py')
files.remove('folder_2.py')
files.remove('.vscode')
for file in files:
    loc = os.listdir(os.path.join(cwd, file))
    string = ' '.join(loc)
    stores = re.findall('[0-9]+[.\w]+', string)
    for store in stores:
        ok = False
        dest = ""
        for source in store:
            if not source.isnumeric():
                ok = True
            if ok:
                dest += source
        os.chdir(os.path.join(cwd, file))
        os.rename(store, dest)
        os.chdir(cwd)