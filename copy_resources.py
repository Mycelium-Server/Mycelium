import os
import shutil
import sys

src = sys.argv[2]

def samefile(*args, **kwargs):
    return False


shutil._samefile = samefile

shutil.copy(src + "/properties.yml", "./properties.yml")
shutil.copy(src + "/registry_codec.nbt", "./registry_codec.nbt")
shutil.copy(src + "/cert.pem", "./cert.pem")
if os.name == "nt":
    src1 = "thirdparty/libuv/" + sys.argv[1] + "/libuv.dll"
    src2 = "thirdparty/libuv/libuv.dll"
    if os.path.exists(src1):
        shutil.copy(src1, "./libuv.dll")
    elif os.path.exists(src2):
        shutil.copy(src2, "./libuv.dll")
    else:
        raise Exception("Couldn't find libuv.dll")
