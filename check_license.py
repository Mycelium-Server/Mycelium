import os

source_dir = "src"

ignore_files = [ "src/uuid.h", "src/json.hpp", "src/daft_hash.cpp", "src/daft_hash.h" ]
ignore_dirs  = [ "src/gsl" ]


def reformat_license_header(raw):
    new = ["/*"]
    new.extend(" * " + line.rstrip() if line.strip() else " *" for line in raw)
    new.extend([" */", ""])
    return new

header_f = open("license_header.txt", "r")
license_header = reformat_license_header(header_f.readlines())
header_f.close()

for path, dirs, files in os.walk(source_dir):
    if path.replace(os.sep, "/") in ignore_dirs: continue
    for fpath in files:
        fpath = os.path.join(path, fpath)
        if fpath.replace(os.sep, "/") in ignore_files: continue
        with open(fpath, "r") as fp:
            if sum(1 for line in fp) < len(license_header):
                raise Exception("License check failed: " + fpath)
        file = open(fpath, "r")
        head = [next(file).rstrip() for x in range(len(license_header))]
        file.close()
        if not head == license_header:
            raise Exception("License check failed: " + fpath)
