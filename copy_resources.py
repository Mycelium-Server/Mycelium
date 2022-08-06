import shutil
import sys

args_len = len(sys.argv)
src = sys.argv[args_len - 1]

def samefile(*args, **kwargs):
    return False


shutil._samefile = samefile

shutil.copy(src + "/properties.yml", "./properties.yml")
shutil.copy(src + "/registry_codec.nbt", "./registry_codec.nbt")
shutil.copy(src + "/cert.pem", "./cert.pem")
