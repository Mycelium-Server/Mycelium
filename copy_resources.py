import os
import shutil
import sys

shutil.copy("../properties.yml", "./properties.yml")
shutil.copy("../registry_codec.nbt", "./registry_codec.nbt")
shutil.copy("../cert.pem", "./cert.pem")
if os.name == "nt":
    src1 = "thirdparty/libuv/" + sys.argv[0] + "/libuv.dll"
    src2 = "thirdparty/libuv/libuv.dll"
    if os.path.exists(src1):
        shutil.copy(src1, "./libuv.dll")
    elif os.path.exists(src2):
        shutil.copy(src2, "./libuv.dll")
    else:
        raise Exception("Couldn't find libuv.dll")
