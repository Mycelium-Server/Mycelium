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
    lookup = [ "thirdparty/libuv/" + sys.argv[1] + "/libuv.dll", "thirdparty/libuv/" + sys.argv[1] + "/uv.dll",
               "thirdparty/libuv/libuv.dll", "thirdparty/libuv/uv.dll" ]
    for uv in lookup:
        if os.path.exists(uv):
            shutil.copy(uv, ".")
            exit(0)

    raise Exception("Couldn't find libuv.dll")
